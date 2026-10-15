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
;   start, stop - метки начала и конца данных сэмпла (длина = stop - start)
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
