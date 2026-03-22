<?php

class RncBitStream {
    public int $d6 = 0;
    public int $d7 = 0;
    public int $a3 = 0;
    public array $input;

    public function __construct(array $input, int $startOffset) {
        $this->input = $input;
        $this->a3 = $startOffset;
        
        $this->d7 = 0;
        $b1 = $this->input[$this->a3 + 1] ?? 0;
        $b0 = $this->input[$this->a3] ?? 0;
        $this->d6 = (($b1 << 8) | $b0) & 0xFFFFFFFF;
        
        $this->readBits(2);
    }

    public function readBits(int $d1): int {
        $mask = (1 << $d1) - 1;
        $res = $this->d6 & $mask;
        $this->consumeBits($d1);
        return $res;
    }

    public function consumeBits(int $d1): void {
        $this->d7 -= $d1;
        if ($this->d7 < 0) {
            $this->doInputBits($d1);
        } else {
            $this->d6 = ($this->d6 >> $d1) & 0xFFFFFFFF;
        }
    }

    private function doInputBits(int $d1): void {
        $old_d7 = $this->d7 + $d1;
        
        $this->d6 = ($this->d6 >> $old_d7) & 0xFFFFFFFF;
        $this->d6 = (($this->d6 & 0xFFFF) << 16) | (($this->d6 >> 16) & 0xFFFF);
        
        $this->a3 += 4;
        $b_high = $this->input[$this->a3 - 1] ?? 0;
        $b_low  = $this->input[$this->a3 - 2] ?? 0;
        $this->a3 -= 2;
        
        $new_word = ($b_high << 8) | $b_low;
        $this->d6 = ($this->d6 & 0xFFFF0000) | $new_word;
        
        $this->d6 = (($this->d6 & 0xFFFF) << 16) | (($this->d6 >> 16) & 0xFFFF);
        
        $needed = $d1 - $old_d7;
        $this->d7 = 16 - $needed;
        
        $this->d6 = ($this->d6 >> $needed) & 0xFFFFFFFF;
    }

    public function resync(): void {
        $b1 = $this->input[$this->a3 + 1] ?? 0;
        $b0 = $this->input[$this->a3] ?? 0;
        $new_word = ($b1 << 8) | $b0;
        
        $shifted_word = ($new_word << $this->d7) & 0xFFFFFFFF;
        $mask = ($this->d7 === 16) ? 0xFFFF : ((1 << $this->d7) - 1);
        
        $this->d6 = ($this->d6 & $mask) | $shifted_word;
    }
}

class RncUnpacker {
    private array $input;
    private RncBitStream $stream;
    private int $d5 = 0;

    public function __construct(string $compressedData) {
        $this->input = array_map('ord', str_split($compressedData));
    }

    /**
     * Выполняет распаковку данных RNC.
     * Читает количество чанков и декодирует данные, используя таблицы Хаффмана.
     */
    public function unpack(): string {
        $a3 = 17;
        $chunks = $this->input[$a3++] ?? 0;
        
        $this->stream = new RncBitStream($this->input, $a3);
        $ring = array_fill(0, 0x4000, 0);
        $finalOutput = '';
        $this->d5 = 0;
        
        for ($chunk = 0; $chunk < $chunks; $chunk++) {
            $sizeTable = $this->makeHufTable();
            $posTable  = $this->makeHufTable();
            $lenTable  = $this->makeHufTable();
            
            $counts = $this->stream->readBits(16);
            $d4 = $counts - 1;
            
            while (true) {
                // Блок SIZE (Сырые данные)
                $size = $this->inputValue($sizeTable);
                if ($size !== 0) {
                    for ($i = 0; $i < $size; $i++) {
                        $byte = $this->stream->input[$this->stream->a3++] ?? 0;
                        $ring[$this->d5] = $byte;
                        $finalOutput .= chr($byte);
                        $this->d5 = ($this->d5 + 1) & 0x3FFF;
                    }
                    $this->stream->resync();
                }
                
                // Строгая эмуляция поведения m68k dbf
                $d4--;
                if ($d4 < 0) {
                    break;
                }
                
                // Блок POS / LEN (Повторы из словаря)
                $pos = $this->inputValue($posTable);
                $d3 = ($this->d5 - ($pos + 1)) & 0x3FFF;
                
                $len = $this->inputValue($lenTable);
                $len += 2;
                
                for ($i = 0; $i < $len; $i++) {
                    $byte = $ring[$d3];
                    $ring[$this->d5] = $byte;
                    $finalOutput .= chr($byte);
                    $this->d5 = ($this->d5 + 1) & 0x3FFF;
                    $d3 = ($d3 + 1) & 0x3FFF;
                }
            }
        }
        
        return $finalOutput;
    }

    private function makeHufTable(): ?array {
        $num_codes = $this->stream->readBits(5);
        if ($num_codes === 0) {
            return null;
        }
        
        $lengths = [];
        for ($i = 0; $i < $num_codes; $i++) {
            $lengths[$i] = $this->stream->readBits(4);
        }
        
        $table = [];
        $d2 = 0;
        $d0 = 0x80000000;
        
        for ($d1 = 1; $d1 <= 16; $d1++) {
            for ($i = 0; $i < $num_codes; $i++) {
                if ($lengths[$i] === $d1) {
                    $mask = (1 << $d1) - 1;
                    
                    $code = ($d2 >> 16) & 0xFFFF;
                    $reversed = 0;
                    for ($j = 0; $j < $d1; $j++) {
                        $bit = ($code >> (15 - $j)) & 1;
                        $reversed |= ($bit << $j);
                    }
                    
                    $val1 = $i;
                    $val2 = ($val1 >= 2) ? ((1 << ($val1 - 1)) - 1) : 0;
                    
                    $table[] = [
                        'mask' => $mask,
                        'code' => $reversed,
                        'len'  => $d1,
                        'val1' => $val1,
                        'val2' => $val2
                    ];
                    
                    $d2 = ($d2 + $d0) & 0xFFFFFFFF;
                }
            }
            $d0 = ($d0 >> 1) & 0xFFFFFFFF;
        }
        
        return $table;
    }

    private function inputValue(?array $table): int {
        if ($table === null) return 0;

        $d6_state = $this->stream->d6;
        
        foreach ($table as $entry) {
            if (($d6_state & $entry['mask']) === $entry['code']) {
                $this->stream->consumeBits($entry['len']);
                
                $val1 = $entry['val1'];
                if ($val1 < 2) {
                    return $val1;
                }
                
                $extraBitsLen = $val1 - 1;
                $extraBits = $this->stream->readBits($extraBitsLen);
                
                return $extraBits | (1 << $extraBitsLen);
            }
        }
        
        throw new RuntimeException("Ошибка декодирования Хаффмана: неизвестный код битового потока.");
    }
}

if ($argc < 3) {
    echo "Usage: php rnc_unpacker.php <input> <output>\n";
    exit(1);
}

$compressedFile = file_get_contents($argv[1]);
$unpacker = new RncUnpacker($compressedFile);
$decompressedBinary = $unpacker->unpack();
file_put_contents($argv[2], $decompressedBinary);