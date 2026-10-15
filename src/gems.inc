; ------------- GEMS sound data macros -------------
; Таблица секвенций GEMS (SEQUENCE_TBL_Z80) и заголовки секвенций хранят 16-битные
; смещения от начала SEQUENCE_TBL_Z80 в порядке little-endian (их читает Z80).

; смещение метки target от SEQUENCE_TBL_Z80, little-endian
gems_ofs macro target
        dc.b ((target)-SEQUENCE_TBL_Z80)&$FF, (((target)-SEQUENCE_TBL_Z80)>>8)&$FF
        endm
