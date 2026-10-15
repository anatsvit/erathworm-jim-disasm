; ------------- GEMS sound data macros -------------
; Таблицы GEMS (PATCH_TBL_Z80, SEQUENCE_TBL_Z80) хранят 16-битные смещения от начала
; своей таблицы в порядке little-endian (их читает Z80-драйвер, binaries/z80_driver.bin).

; смещение метки target от SEQUENCE_TBL_Z80, little-endian
gems_seq_ofs macro target
        dc.b ((target)-SEQUENCE_TBL_Z80)&$FF, (((target)-SEQUENCE_TBL_Z80)>>8)&$FF
        endm

; смещение метки target от PATCH_TBL_Z80, little-endian
gems_patch_ofs macro target
        dc.b ((target)-PATCH_TBL_Z80)&$FF, (((target)-PATCH_TBL_Z80)>>8)&$FF
        endm

; ---------------------------------------------------------------------------
; Патчи (инструменты). Первый байт - тип: 0 FM, 1 digital, 2 PSG tone, 3 PSG noise.
; Формат сверен с загрузчиком патчей в Z80-драйвере (адреса ниже - в z80_driver.bin).

; FM-патч, 39 байт: gems_fm + 4 x gems_op + gems_ch3 + gems_keyon ($142F)
;   lfo   - значение рег. $22, пишется только если бит 3 (LFO on) установлен
;   ch3   - режим канала 3 (рег. $27), бит 6 = special mode с частотами из gems_ch3
;   fb, alg - feedback/algorithm (рег. $B0)
;   pan   - 3 = L+R, 2 = L, 1 = R; ams, fms - чувствительность к LFO (рег. $B4)
gems_fm macro lfo, ch3, fb, alg, pan, ams, fms
        dc.b 0, lfo, ch3, ((fb)<<3)|(alg), ((pan)<<6)|((ams)<<4)|(fms)
        endm

; оператор FM: dt,mul ($30) tl ($40) rs,ar ($50) am,d1r ($60) d2r ($70) d1l,rr ($80)
; Операторы идут в порядке регистров: +0, +4, +8, +C (S1, S3, S2, S4).
; TL несущих операторов драйвер пересчитывает с учётом громкости канала.
gems_op macro dt, mul, tl, rs, ar, am, d1r, d2r, d1l, rr
        dc.b ((dt)<<4)|(mul), tl, ((rs)<<6)|(ar), ((am)<<7)|(d1r), d2r, ((d1l)<<4)|(rr)
        endm

; частоты операторов для special mode канала 3 (block/fnum, старший байт первым);
; пары регистров $A6/$A2, $AC/$A8, $AD/$A9, $AE/$AA. Без special mode не используются.
gems_ch3 macro f1, f2, f3, f4
        dc.b (f1)>>8, (f1)&$FF, (f2)>>8, (f2)&$FF, (f3)>>8, (f3)&$FF, (f4)>>8, (f4)&$FF
        endm

; ops - маска операторов для key on (старшая тетрада рег. $28),
; extra - последний байт патча, загрузчиком FM не читается
gems_keyon macro ops, extra
        dc.b ops, extra
        endm

; digital-патч: rate - частота воспроизведения (младшая тетрада флагов сэмпла),
; 4 = брать частоту из DIGITAL_TBL_Z80 ($1364). Меняется командой секвенции ($0713).
gems_digital macro rate
        dc.b 1, rate
        endm

; PSG-патчи ($1243): огибающая ar - attack rate, sl - sustain level, al - attack level,
; dr - decay rate, rr - release rate (уровни - младшая тетрада, драйвер сдвигает их <<4).
; Имена параметров - по документации GEMS, порядок байтов подтверждён драйвером.
gems_psg_tone macro ar, sl, al, dr, rr
        dc.b 2, 0, ar, sl, al, dr, rr
        endm

; noise - режим шума SN76489 (биты FB/NF); при NF = 3 частота берётся с тонового канала 3
gems_psg_noise macro noise, ar, sl, al, dr, rr
        dc.b 3, noise, ar, sl, al, dr, rr
        endm

; ---------------------------------------------------------------------------
; Огибающие высоты тона (ENVELOPE_TBL_Z80), обработчик в драйвере $0EC8.
; Огибающая: начальное смещение высоты, затем сегменты, в конце gems_env_end.
; Значения - 16-битные со знаком, little-endian; смещение складывается с высотой ноты канала
; (единицы по коду драйвера не уточнены).

; смещение метки target от ENVELOPE_TBL_Z80, little-endian
gems_env_ofs macro target
        dc.b ((target)-ENVELOPE_TBL_Z80)&$FF, (((target)-ENVELOPE_TBL_Z80)>>8)&$FF
        endm

; начальное смещение высоты при старте огибающей
gems_env_start macro pitch
        dc.b (pitch)&$FF, ((pitch)>>8)&$FF
        endm

; сегмент: ticks тиков подряд к высоте прибавляется delta (ticks = 1..255)
gems_env_seg macro ticks, delta
        dc.b ticks, (delta)&$FF, ((delta)>>8)&$FF
        endm

; конец огибающей: смещение высоты сбрасывается в 0
gems_env_end macro
        dc.b 0
        endm

; ---------------------------------------------------------------------------
; Таблица сэмплов (DIGITAL_TBL_Z80), 12 байт на сэмпл; загрузка в драйвере $1336.
; Номер сэмпла = (нота - $30) mod $60. Адрес сэмпла - 24-битное смещение (LE) от DIGITAL_TBL_Z80.
;   flags - младшая тетрада: частота воспроизведения (если патч не задаёт свою, см. gems_digital),
;           бит 4: петля - по достижении конца сэмпл повторяет последние loop байт
;   start, stop - метки начала и конца данных сэмпла SMP_xxx_DAT/SMP_xxx_END (длина = stop - start)
;   skip  - сколько байт пропустить от начала при старте
;   loop  - длина петли (только при бите 4)
;   tail  - последнее поле записи, драйвером не читается
gems_sample_ex macro flags, start, stop, skip, loop, tail
        dc.b flags
        dc.b ((start)-DIGITAL_TBL_Z80)&$FF, (((start)-DIGITAL_TBL_Z80)>>8)&$FF, (((start)-DIGITAL_TBL_Z80)>>16)&$FF
        dc.b (skip)&$FF, (skip)>>8, ((stop)-(start))&$FF, ((stop)-(start))>>8
        dc.b (loop)&$FF, (loop)>>8, (tail)&$FF, (tail)>>8
        endm

; обычный сэмпл без пропуска и петли
gems_sample macro flags, start, stop
        gems_sample_ex flags, start, stop, 0, 0, 0
        endm

; пустая запись (сэмпла нет, длина 0)
gems_sample_none macro
        dc.b 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
        endm

; ---------------------------------------------------------------------------
; Поток канала секвенции (данные в src/gems_seq.inc), интерпретатор в драйвере $04BC,
; диспетчер команд $0570. Задержка (sq_delay) - сколько тиков ждать после ноты или
; ждущей команды; длительность (sq_dur) - сколько тиков звучит нота. Оба значения
; сохраняются до следующего изменения. Ноты с нулевой задержкой звучат одновременно (аккорд).

; число v (0..$3FFFF) в формате GEMS: разряды по 6 бит, старший первым, base = $80 или $C0
gems_vlq macro base, v
        if (v)>=$1000
          dc.b (base)|((v)>>12), (base)|(((v)>>6)&$3F), (base)|((v)&$3F)
        elseif (v)>=$40
          dc.b (base)|((v)>>6), (base)|((v)&$3F)
        else
          dc.b (base)|(v)
        endif
        endm

; нота nC0..nB7 (для digital-патча - sq_sample)
sq_note macro n
        dc.b n
        endm

sq_dur macro v
        gems_vlq $80, v
        endm

sq_delay macro v
        gems_vlq $C0, v
        endm

; $60: конец потока канала
sq_end macro
        dc.b $60
        endm

; $61: сменить патч (номер в PATCH_TBL_Z80, метки PATCH_xx)
sq_patch macro n
        dc.b $61, n
        endm

; $62: огибающая высоты тона (номер в ENVELOPE_TBL_Z80, метки ENV_xx)
sq_env macro n
        dc.b $62, n
        endm

; $63: подождать текущую задержку без ноты (пауза)
sq_wait macro
        dc.b $63
        endm

; $64/$65: повторить блок до sq_loop_end count раз; SQ_FOREVER - бесконечно
SQ_FOREVER equ 127
sq_loop macro count
        dc.b $64, count
        endm

sq_loop_end macro
        dc.b $65
        endm

; $66: flag <> 0 - перезапускать огибающую на каждой ноте
sq_retrig macro flag
        dc.b $66, flag
        endm

; $67: flag <> 0 - sustain
sq_sustain macro flag
        dc.b $67, flag
        endm

; $68: темп (драйвер хранит bpm - 40)
sq_tempo macro bpm
        dc.b $68, (bpm)-40
        endm

; $69: заглушить/включить канал другой секвенции: биты 0-3 - канал, бит 4 - включить
sq_mute macro arg
        dc.b $69, arg
        endm

; $6A: приоритет канала
sq_prio macro n
        dc.b $6A, n
        endm

; $6B: запустить секвенцию n
sq_start_seq macro n
        dc.b $6B, n
        endm

; $6C: pitch bend, 16 бит со знаком
sq_bend macro v
        dc.b $6C, (v)&$FF, ((v)>>8)&$FF
        endm

; $6D: таймбаза эффектов (фиксированная, не зависит от темпа)
sq_sfx macro
        dc.b $6D
        endm

; $6E: частота воспроизведения digital-патча (см. gems_digital)
sq_rate macro n
        dc.b $6E, n
        endm

; $6F: переход на target (16-битное смещение со знаком от конца команды)
sq_goto macro target
        dc.b $6F, ((target)-(*+3))&$FF, (((target)-(*+3))>>8)&$FF
        endm

sq_goto_raw macro ofs
        dc.b $6F, (ofs)&$FF, ((ofs)>>8)&$FF
        endm

; $70: записать value в почтовый ящик mbox (их читает 68k)
sq_store macro mbox, value
        dc.b $70, mbox, value
        endm

; $71: условие по почтовому ящику: mbox, rel (тип сравнения), value, skip (байт пропуска)
sq_if macro mbox, rel, value, skip
        dc.b $71, mbox, rel, value, skip
        endm

; $72: служебная команда cmd, value (5 - громкость канала, см. sq_ch_atten)
sq_seekrit macro cmd, value
        dc.b $72, cmd, value
        endm

; $72 05: ослабление громкости канала
sq_ch_atten macro v
        dc.b $72, 5, v
        endm

; ---------------------------------------------------------------------------
; Ноты: номер = октава*12 + полутон, nC0 = 0 ... nB7 = $5F; s = диез (nCs4 = C#4).
; По таблицам частот драйвера ($1168 FM, $1182 PSG): nC0 = 16.35 Гц, nA4 = 440 Гц.
; Префикс n - потому что A0-A7/D0-D7 заняты регистрами 68000.
nC0     equ 0
nCs0    equ 1
nD0     equ 2
nDs0    equ 3
nE0     equ 4
nF0     equ 5
nFs0    equ 6
nG0     equ 7
nGs0    equ 8
nA0     equ 9
nAs0    equ 10
nB0     equ 11
nC1     equ 12
nCs1    equ 13
nD1     equ 14
nDs1    equ 15
nE1     equ 16
nF1     equ 17
nFs1    equ 18
nG1     equ 19
nGs1    equ 20
nA1     equ 21
nAs1    equ 22
nB1     equ 23
nC2     equ 24
nCs2    equ 25
nD2     equ 26
nDs2    equ 27
nE2     equ 28
nF2     equ 29
nFs2    equ 30
nG2     equ 31
nGs2    equ 32
nA2     equ 33
nAs2    equ 34
nB2     equ 35
nC3     equ 36
nCs3    equ 37
nD3     equ 38
nDs3    equ 39
nE3     equ 40
nF3     equ 41
nFs3    equ 42
nG3     equ 43
nGs3    equ 44
nA3     equ 45
nAs3    equ 46
nB3     equ 47
nC4     equ 48
nCs4    equ 49
nD4     equ 50
nDs4    equ 51
nE4     equ 52
nF4     equ 53
nFs4    equ 54
nG4     equ 55
nGs4    equ 56
nA4     equ 57
nAs4    equ 58
nB4     equ 59
nC5     equ 60
nCs5    equ 61
nD5     equ 62
nDs5    equ 63
nE5     equ 64
nF5     equ 65
nFs5    equ 66
nG5     equ 67
nGs5    equ 68
nA5     equ 69
nAs5    equ 70
nB5     equ 71
nC6     equ 72
nCs6    equ 73
nD6     equ 74
nDs6    equ 75
nE6     equ 76
nF6     equ 77
nFs6    equ 78
nG6     equ 79
nGs6    equ 80
nA6     equ 81
nAs6    equ 82
nB6     equ 83
nC7     equ 84
nCs7    equ 85
nD7     equ 86
nDs7    equ 87
nE7     equ 88
nF7     equ 89
nFs7    equ 90
nG7     equ 91
nGs7    equ 92
nA7     equ 93
nAs7    equ 94
nB7     equ 95

; нота digital-патча: s - метка записи сэмпла в DIGITAL_TBL_Z80 (SMP_xxx).
; Номер сэмпла = позиция записи в таблице, нота = (номер + $30) mod $60.
sq_sample macro s
        dc.b (((s)-DIGITAL_TBL_Z80)/12+$30)-$60*((((s)-DIGITAL_TBL_Z80)/12+$30)/$60)
        endm
