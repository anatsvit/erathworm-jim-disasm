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
