<?php
/**
 * RNC Method 1 Packer - based on decompiled ProPack source
 */

$LOG_FILE = __DIR__ . '/rnc_pack.log';
$LOG_FP = fopen($LOG_FILE, 'w');
function logMsg($msg) { global $LOG_FP; fwrite($LOG_FP, $msg . "\n"); }

// ===================== CRC-16 =====================
$CRC_TABLE = [
    0x0000,0xC0C1,0xC181,0x0140,0xC301,0x03C0,0x0280,0xC241,
    0xC601,0x06C0,0x0780,0xC741,0x0500,0xC5C1,0xC481,0x0440,
    0xCC01,0x0CC0,0x0D80,0xCD41,0x0F00,0xCFC1,0xCE81,0x0E40,
    0x0A00,0xCAC1,0xCB81,0x0B40,0xC901,0x09C0,0x0880,0xC841,
    0xD801,0x18C0,0x1980,0xD941,0x1B00,0xDBC1,0xDA81,0x1A40,
    0x1E00,0xDEC1,0xDF81,0x1F40,0xDD01,0x1DC0,0x1C80,0xDC41,
    0x1400,0xD4C1,0xD581,0x1540,0xD701,0x17C0,0x1680,0xD641,
    0xD201,0x12C0,0x1380,0xD341,0x1100,0xD1C1,0xD081,0x1040,
    0xF001,0x30C0,0x3180,0xF141,0x3300,0xF3C1,0xF281,0x3240,
    0x3600,0xF6C1,0xF781,0x3740,0xF501,0x35C0,0x3480,0xF441,
    0x3C00,0xFCC1,0xFD81,0x3D40,0xFF01,0x3FC0,0x3E80,0xFE41,
    0xFA01,0x3AC0,0x3B80,0xFB41,0x3900,0xF9C1,0xF881,0x3840,
    0x2800,0xE8C1,0xE981,0x2940,0xEB01,0x2BC0,0x2A80,0xEA41,
    0xEE01,0x2EC0,0x2F80,0xEF41,0x2D00,0xEDC1,0xEC81,0x2C40,
    0xE401,0x24C0,0x2580,0xE541,0x2700,0xE7C1,0xE681,0x2640,
    0x2200,0xE2C1,0xE381,0x2340,0xE101,0x21C0,0x2080,0xE041,
    0xA001,0x60C0,0x6180,0xA141,0x6300,0xA3C1,0xA281,0x6240,
    0x6600,0xA6C1,0xA781,0x6740,0xA501,0x65C0,0x6480,0xA441,
    0x6C00,0xACC1,0xAD81,0x6D40,0xAF01,0x6FC0,0x6E80,0xAE41,
    0xAA01,0x6AC0,0x6B80,0xAB41,0x6900,0xA9C1,0xA881,0x6840,
    0x7800,0xB8C1,0xB981,0x7940,0xBB01,0x7BC0,0x7A80,0xBA41,
    0xBE01,0x7EC0,0x7F80,0xBF41,0x7D00,0xBDC1,0xBC81,0x7C40,
    0xB401,0x74C0,0x7580,0xB541,0x7700,0xB7C1,0xB681,0x7640,
    0x7200,0xB2C1,0xB381,0x7340,0xB101,0x71C0,0x7080,0xB041,
    0x5000,0x90C1,0x9181,0x5140,0x9301,0x53C0,0x5280,0x9241,
    0x9601,0x56C0,0x5780,0x9741,0x5500,0x95C1,0x9481,0x5440,
    0x9C01,0x5CC0,0x5D80,0x9D41,0x5F00,0x9FC1,0x9E81,0x5E40,
    0x5A00,0x9AC1,0x9B81,0x5B40,0x9901,0x59C0,0x5880,0x9841,
    0x8801,0x48C0,0x4980,0x8941,0x4B00,0x8BC1,0x8A81,0x4A40,
    0x4E00,0x8EC1,0x8F81,0x4F40,0x8D01,0x4DC0,0x4C80,0x8C41,
    0x4400,0x84C1,0x8581,0x4540,0x8701,0x47C0,0x4680,0x8641,
    0x8201,0x42C0,0x4380,0x8341,0x4100,0x81C1,0x8081,0x4040,
];

function rnc_crc16($data) {
    global $CRC_TABLE;
    $crc = 0;
    $len = strlen($data);
    for ($i = 0; $i < $len; $i++) {
        $crc = $CRC_TABLE[($crc & 0xFF) ^ ord($data[$i])] ^ ($crc >> 8);
    }
    return $crc & 0xFFFF;
}

// ===================== Packer State =====================
class RNCPacker {
    public $output = '';
    public $pack_token = 0;
    public $bit_count = 0;
    public $tmp_data = [];  // deferred literal bytes

    // Write a single byte to output
    public function writeToOutput($byte) {
        $this->output .= chr($byte & 0xFF);
    }

    // Buffer a literal byte: deferred if bit_count > 0
    public function writeLiteralByte($byte) {
        if ($this->bit_count) {
            $this->tmp_data[] = $byte & 0xFF;
        } else {
            $this->writeToOutput($byte);
        }
    }

    // Write bits to bit stream (method 1: LSB-first into 16-bit tokens)
    public function writeBits($value, $count) {
        for ($i = 0; $i < $count; $i++) {
            $this->pack_token >>= 1;
            if ($value & 1) {
                $this->pack_token |= 0x8000;
            }
            $value >>= 1;
            $this->bit_count++;

            if ($this->bit_count == 16) {
                $this->writeToOutput($this->pack_token & 0xFF);
                $this->writeToOutput(($this->pack_token >> 8) & 0xFF);

                // Flush deferred data
                foreach ($this->tmp_data as $b) {
                    $this->writeToOutput($b);
                }
                $this->tmp_data = [];

                $this->bit_count = 0;
                $this->pack_token = 0;
            }
        }
    }

    // Finalize: flush remaining bits
    public function finalize() {
        if ($this->bit_count > 0) {
            $this->pack_token >>= (16 - $this->bit_count);
        }

        if ($this->bit_count || !empty($this->tmp_data)) {
            $this->writeToOutput($this->pack_token & 0xFF);
        }

        if ($this->bit_count > 8 || !empty($this->tmp_data)) {
            $this->writeToOutput(($this->pack_token >> 8) & 0xFF);
        }

        foreach ($this->tmp_data as $b) {
            $this->writeToOutput($b);
        }
        $this->tmp_data = [];
    }
}

// ===================== Huffman =====================

function bits_count($value) {
    $count = 1;
    while ($value >>= 1) $count++;
    return $count;
}

function inverse_bits($value, $count) {
    $result = 0;
    while ($count--) {
        $result <<= 1;
        if ($value & 1) $result |= 1;
        $value >>= 1;
    }
    return $result;
}

// Huffman table entry
class HufEntry {
    public $l1 = 0;          // frequency
    public $l2 = 0xFFFF;     // linked list next
    public $l3 = 0;          // canonical code (bit-reversed)
    public $bit_depth = 0;   // code length
}

function buildHufTable(&$table, $count) {
    // Count non-zero entries
    $d4 = 0;
    $ve = 0;
    for ($i = 0; $i < $count; $i++) {
        if ($table[$i]->l1) {
            $d4++;
            $ve = $i;
        }
    }
    if (!$d4) return;
    if ($d4 == 1) {
        $table[$ve]->bit_depth++;
        return;
    }

    // Build Huffman tree using repeated merging of two smallest
    while (true) {
        // Find two smallest
        $d6 = 0xFFFFFFFF;
        $d5 = 0xFFFFFFFF;
        $v20 = -1;
        $v21 = -1;

        for ($i = 0; $i < $count; $i++) {
            if ($table[$i]->l1) {
                if ($table[$i]->l1 < $d5) {
                    $d6 = $d5;
                    $v21 = $v20;
                    $d5 = $table[$i]->l1;
                    $v20 = $i;
                } elseif ($table[$i]->l1 < $d6) {
                    $d6 = $table[$i]->l1;
                    $v21 = $i;
                }
            }
        }

        if ($d5 == 0xFFFFFFFF || $d6 == 0xFFFFFFFF) break;

        // Merge
        $table[$v20]->l1 += $table[$v21]->l1;
        $table[$v21]->l1 = 0;
        $table[$v20]->bit_depth++;

        $idx = $v20;
        while ($table[$idx]->l2 != 0xFFFF) {
            $idx = $table[$idx]->l2;
            $table[$idx]->bit_depth++;
        }

        $table[$idx]->l2 = $v21;
        $table[$v21]->bit_depth++;

        $idx = $v21;
        while ($table[$idx]->l2 != 0xFFFF) {
            $idx = $table[$idx]->l2;
            $table[$idx]->bit_depth++;
        }
    }

    // Assign canonical codes
    $val = 0;
    $div = 0x80000000;
    for ($bitsCount = 1; $bitsCount <= 16; $bitsCount++) {
        for ($i = 0; $i < $count; $i++) {
            if ($table[$i]->bit_depth == $bitsCount) {
                $table[$i]->l3 = inverse_bits(intdiv($val, $div), $bitsCount);
                $val += $div;
            }
        }
        $div >>= 1;
    }
}

function encodeHufTable($packer, $table, $count) {
    // Find last non-zero bit_depth
    $cnt = $count;
    while ($cnt > 0 && $table[$cnt - 1]->bit_depth == 0) {
        $cnt--;
    }

    $packer->writeBits($cnt, 5);
    for ($i = 0; $i < $cnt; $i++) {
        $packer->writeBits($table[$i]->bit_depth, 4);
    }
}

function encodeValue($packer, $table, $value) {
    if ($value > 1) {
        $bits = bits_count($value);
    } else {
        $bits = $value;
    }

    $packer->writeBits($table[$bits]->l3, $table[$bits]->bit_depth);

    if ($bits > 1) {
        $packer->writeBits($value - (1 << ($bits - 1)), $bits - 1);
    }
}

function updateBitsTable($table, $value) {
    if ($value <= 1) {
        $table[$value]->l1++;
    } else {
        $table[bits_count($value)]->l1++;
    }
}

// ===================== LZ77 Matching =====================

// Max lookback = ring buffer size (ring is 0x4000 bytes, max offset = 0x3FFF)
define('RNC_MAX_DIST', 0x3FFF);

// Find best LZ match using pre-built 2-byte hash chain.
// The chain is built for the entire file so cross-chunk lookback works.
// prevTable[pos] = most recent position < pos with the same 2-byte key.
function findBestMatch($data, $pos, $endPos, &$prevTable) {
    $bestLen = 1;
    $bestDist = 0;
    $maxLen = min($endPos - $pos, 0xFFFF);
    if ($maxLen < 2) return null;

    $searchStart = max(0, $pos - RNC_MAX_DIST);
    $i = $prevTable[$pos] ?? -1;

    while ($i >= $searchStart) {
        // First 2 bytes already match (same hash key) — start comparison at offset 2
        if ($bestLen < 2 || $data[$i + $bestLen] === $data[$pos + $bestLen]) {
            $len = 2;
            while ($len < $maxLen && $data[$i + $len] === $data[$pos + $len]) {
                $len++;
            }
            if ($len > $bestLen) {
                $bestLen = $len;
                $bestDist = $pos - $i;
                if ($bestLen >= $maxLen) break;
            }
        }
        $i = $prevTable[$i] ?? -1;
    }

    return $bestLen >= 2 ? ['count' => $bestLen, 'offset' => $bestDist] : null;
}

// ===================== Main Packing =====================

// Pack $data using a specific block size and len-2 offset threshold. Returns [packed_body, chunks_count].
function packWithBlockSize($data, $dataLen, $packBlockSize, &$prevTable, $len2Threshold = 1024) {
    $RAW_TABLE_SIZE = 32;
    $LEN_TABLE_SIZE = 32;
    $POS_TABLE_SIZE = 32;

    $packer = new RNCPacker();
    $chunksCount = 0;
    $inputPos = 0;

    // Write lock bits
    $packer->writeBits(0, 2);

    while ($inputPos < $dataLen) {
        $rawTable = [];
        $lenTable = [];
        $posTable = [];
        for ($i = 0; $i < $RAW_TABLE_SIZE; $i++) $rawTable[] = new HufEntry();
        for ($i = 0; $i < $LEN_TABLE_SIZE; $i++) $lenTable[] = new HufEntry();
        for ($i = 0; $i < $POS_TABLE_SIZE; $i++) $posTable[] = new HufEntry();

        $commands = [];
        $pos = $inputPos;
        $chunkEnd = min($inputPos + $packBlockSize, $dataLen);
        $litLen = 0;
        $v17 = 0;

        while ($pos < $chunkEnd - 1 && $v17 < 0xFFFE) {
            $match = findBestMatch($data, $pos, $chunkEnd, $prevTable);

            if ($match !== null && $pos + $match['count'] <= $chunkEnd) {
                // Skip length-2 matches with large offsets: they cost more bits than they save.
                // A len-2 match saves 16 bits but encoding the offset of O costs roughly
                // floor(log2(O)) extra bits plus Huffman overhead.
                if ($match['count'] === 2 && $match['offset'] > $len2Threshold) {
                    $pos++;
                    $litLen++;
                    continue;
                }

                // Lazy matching: check if next position has a strictly better match
                if ($pos + 1 < $chunkEnd - 1 && $match['count'] < 0xFFFF) {
                    $nextMatch = findBestMatch($data, $pos + 1, $chunkEnd, $prevTable);
                    if ($nextMatch !== null && $nextMatch['count'] > $match['count']) {
                        $pos++;
                        $litLen++;
                        continue;
                    }
                }

                updateBitsTable($rawTable, $litLen);
                updateBitsTable($posTable, $match['count'] - 2);
                updateBitsTable($lenTable, $match['offset'] - 1);

                $commands[] = ['lit_len' => $litLen, 'match_count' => $match['count'], 'match_offset' => $match['offset']];
                $pos += $match['count'];
                $litLen = 0;
                $v17++;
            } else {
                $pos++;
                $litLen++;
            }
        }

        // Remaining literal bytes
        $litLen += $chunkEnd - $pos;

        updateBitsTable($rawTable, $litLen);
        $commands[] = ['lit_len' => $litLen, 'match_count' => 0, 'match_offset' => 0];
        $v17++;

        // Build Huffman tables
        buildHufTable($rawTable, $RAW_TABLE_SIZE);
        buildHufTable($lenTable, $LEN_TABLE_SIZE);
        buildHufTable($posTable, $POS_TABLE_SIZE);

        // Encode
        encodeHufTable($packer, $rawTable, $RAW_TABLE_SIZE);
        encodeHufTable($packer, $lenTable, $LEN_TABLE_SIZE);
        encodeHufTable($packer, $posTable, $POS_TABLE_SIZE);

        $packer->writeBits($v17, 16);

        $readPos = $inputPos;
        for ($cmdIdx = 0; $cmdIdx < $v17; $cmdIdx++) {
            $cmd = $commands[$cmdIdx];

            encodeValue($packer, $rawTable, $cmd['lit_len']);

            if ($cmd['lit_len'] > 0) {
                for ($j = 0; $j < $cmd['lit_len']; $j++) {
                    $packer->writeLiteralByte(ord($data[$readPos]));
                    $readPos++;
                }
            }

            if ($cmdIdx < $v17 - 1) {
                encodeValue($packer, $lenTable, $cmd['match_offset'] - 1);
                encodeValue($packer, $posTable, $cmd['match_count'] - 2);
                $readPos += $cmd['match_count'];
            }
        }

        $inputPos = $readPos;
        $chunksCount++;
    }

    $packer->finalize();
    return [$packer->output, $chunksCount];
}

function rncPack($inputFile, $outputFile) {
    $data = file_get_contents($inputFile);
    $dataLen = strlen($data);
    logMsg("Input: $inputFile, size: $dataLen");

    // Build 2-byte hash chain for the entire file (built once, reused across block size attempts).
    $prevTable = array_fill(0, $dataLen, -1);
    $hashHead  = [];
    for ($i = 0; $i < $dataLen - 1; $i++) {
        $key = ord($data[$i]) | (ord($data[$i + 1]) << 8);
        $prevTable[$i] = $hashHead[$key] ?? -1;
        $hashHead[$key] = $i;
    }
    unset($hashHead);

    // Try multiple block sizes and len-2 thresholds; keep the smallest output.
    // Include per-chunk-count optimal sizes plus fixed strategic candidates.
    $blockSizes = [7000, 8000, 9000, 9400, 9600, 9700, 9800, 9900, 10000, 10200, 10400,
                   10700, 11000, 11500, 12000, 12500, 13000, 14000, 16000, $dataLen];
    for ($k = 1; $k <= 8; $k++) {
        $blockSizes[] = (int)ceil($dataLen / $k);
    }
    $blockSizes = array_unique($blockSizes);
    sort($blockSizes);

    // Len-2 match offset thresholds to try (smaller = skip more short matches).
    $thresholds = [128, 256, 512, 1024];

    $bestBody = null;
    $bestChunks = 0;
    $bestBS = 0;
    $bestThreshold = 0;

    foreach ($thresholds as $thresh) {
        foreach ($blockSizes as $bs) {
            if ($bs < 1) continue;
            [$body, $chunks] = packWithBlockSize($data, $dataLen, $bs, $prevTable, $thresh);
            if ($bestBody === null || strlen($body) < strlen($bestBody)) {
                $bestBody = $body;
                $bestChunks = $chunks;
                $bestBS = $bs;
                $bestThreshold = $thresh;
            }
        }
    }

    $packedData = $bestBody;
    $chunksCount = $bestChunks;
    logMsg("Best block size: $bestBS thresh: $bestThreshold, chunks: $chunksCount, packed body: " . strlen($packedData));

    // Compute CRCs
    $unpackedCRC = rnc_crc16($data);
    $packedCRC = rnc_crc16($packedData);

    // Build header
    $header = "RNC\x01";
    $header .= pack('N', $dataLen);
    $header .= pack('N', strlen($packedData));
    $header .= pack('n', $unpackedCRC);
    $header .= pack('n', $packedCRC);
    $header .= chr(0); // leeway
    $header .= chr($chunksCount);

    $result = $header . $packedData;

    if (file_exists($outputFile)) unlink($outputFile);
    file_put_contents($outputFile, $result);
    logMsg("Output: $outputFile, size: " . strlen($result));

    return strlen($result);
}

// Main
if ($argc < 3) {
    echo "Usage: php rnc_pack.php <input> <output>\n";
    exit(1);
}

logMsg("=== RNC Packer Start ===");
$size = rncPack($argv[1], $argv[2]);
logMsg("=== Done, size: $size ===");
fclose($LOG_FP);
echo "Packed to {$argv[2]} ($size bytes)\n";
