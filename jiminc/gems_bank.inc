; Банк звука GEMS: таблицы, которые load_z80_driver / sub_247576 передают драйверу Z80:
;   PATCH_TBL_Z80    - патчи (инструменты FM/PSG/DAC), PATCH_xx
;   ENVELOPE_TBL_Z80 - огибающие, ENV_xx
;   SEQUENCE_TBL_Z80 - секвенции (музыка и эффекты), SEQH_xx -> src/gems_seq.inc
;   DIGITAL_TBL_Z80  - сэмплы, SMP_xx (данные в binaries/sounds/)
; Макросы gems_* - src/gems.inc.
PATCH_TBL_Z80:                          ; DATA XREF: sub_247576+12   o
                                        ; load_z80_driver+1A   o
                                        ; patch bank: смещения (LE) патчей, номер = аргумент команды $61 в секвенциях
                gems_patch_ofs PATCH_00
                gems_patch_ofs PATCH_01
                gems_patch_ofs PATCH_02
                gems_patch_ofs PATCH_03
                gems_patch_ofs PATCH_04
                gems_patch_ofs PATCH_05
                gems_patch_ofs PATCH_06
                gems_patch_ofs PATCH_07
                gems_patch_ofs PATCH_08
                gems_patch_ofs PATCH_09
                gems_patch_ofs PATCH_0A
                gems_patch_ofs PATCH_0B
                gems_patch_ofs PATCH_0C
                gems_patch_ofs PATCH_0D
                gems_patch_ofs PATCH_0E
                gems_patch_ofs PATCH_0F
                gems_patch_ofs PATCH_10
                gems_patch_ofs PATCH_11
                gems_patch_ofs PATCH_12
                gems_patch_ofs PATCH_13
                gems_patch_ofs PATCH_14
                gems_patch_ofs PATCH_15
                gems_patch_ofs PATCH_16
                gems_patch_ofs PATCH_17
                gems_patch_ofs PATCH_18
                gems_patch_ofs PATCH_19
                gems_patch_ofs PATCH_1A
                gems_patch_ofs PATCH_1B
                gems_patch_ofs PATCH_1C
                gems_patch_ofs PATCH_1D
                gems_patch_ofs PATCH_1E
                gems_patch_ofs PATCH_1F
                gems_patch_ofs PATCH_20
                gems_patch_ofs PATCH_21
                gems_patch_ofs PATCH_22
                gems_patch_ofs PATCH_23
                gems_patch_ofs PATCH_24
                gems_patch_ofs PATCH_25
                gems_patch_ofs PATCH_26
                gems_patch_ofs PATCH_27
                gems_patch_ofs PATCH_28
                gems_patch_ofs PATCH_29
                gems_patch_ofs PATCH_2A
                gems_patch_ofs PATCH_2B
                gems_patch_ofs PATCH_2C
                gems_patch_ofs PATCH_2D
                gems_patch_ofs PATCH_2E
                gems_patch_ofs PATCH_2F
                gems_patch_ofs PATCH_30
                gems_patch_ofs PATCH_31
                gems_patch_ofs PATCH_32
                gems_patch_ofs PATCH_33
                gems_patch_ofs PATCH_34
                gems_patch_ofs PATCH_35
                gems_patch_ofs PATCH_36
                gems_patch_ofs PATCH_37
                gems_patch_ofs PATCH_38
                gems_patch_ofs PATCH_39
                gems_patch_ofs PATCH_3A
                gems_patch_ofs PATCH_3B
                gems_patch_ofs PATCH_3C
                gems_patch_ofs PATCH_3D
                gems_patch_ofs PATCH_3E
                gems_patch_ofs PATCH_3F
                gems_patch_ofs PATCH_40
                gems_patch_ofs PATCH_41
                gems_patch_ofs PATCH_42
                gems_patch_ofs PATCH_43
                gems_patch_ofs PATCH_44
                gems_patch_ofs PATCH_45
                gems_patch_ofs PATCH_46
                gems_patch_ofs PATCH_47
                gems_patch_ofs PATCH_48
                gems_patch_ofs PATCH_49
                gems_patch_ofs PATCH_4A
                gems_patch_ofs PATCH_4B
                gems_patch_ofs PATCH_4C
                gems_patch_ofs PATCH_4D
                gems_patch_ofs PATCH_4E
                gems_patch_ofs PATCH_4F
                gems_patch_ofs PATCH_50
                gems_patch_ofs PATCH_51
                gems_patch_ofs PATCH_52
                gems_patch_ofs PATCH_53
                gems_patch_ofs PATCH_54
                gems_patch_ofs PATCH_55
                gems_patch_ofs PATCH_56
                gems_patch_ofs PATCH_57
                gems_patch_ofs PATCH_58
                gems_patch_ofs PATCH_59
                gems_patch_ofs PATCH_5A
                gems_patch_ofs PATCH_5B
                gems_patch_ofs PATCH_5C
                gems_patch_ofs PATCH_5D
                gems_patch_ofs PATCH_5E
                gems_patch_ofs PATCH_5F
                gems_patch_ofs PATCH_60
                gems_patch_ofs PATCH_61
                gems_patch_ofs PATCH_62
                gems_patch_ofs PATCH_63
                gems_patch_ofs PATCH_64
                gems_patch_ofs PATCH_65
                gems_patch_ofs PATCH_66
                gems_patch_ofs PATCH_67
                gems_patch_ofs PATCH_68
                gems_patch_ofs PATCH_69
                gems_patch_ofs PATCH_6A
                gems_patch_ofs PATCH_6B
                gems_patch_ofs PATCH_6C
                gems_patch_ofs PATCH_6D
                gems_patch_ofs PATCH_6E
                gems_patch_ofs PATCH_6F
                gems_patch_ofs PATCH_70
                gems_patch_ofs PATCH_71
                gems_patch_ofs PATCH_72
                gems_patch_ofs PATCH_73
                gems_patch_ofs PATCH_74
                gems_patch_ofs PATCH_75
                gems_patch_ofs PATCH_76
                gems_patch_ofs PATCH_77
                gems_patch_ofs PATCH_78
                gems_patch_ofs PATCH_79
                gems_patch_ofs PATCH_7A
                gems_patch_ofs PATCH_7B
                gems_patch_ofs PATCH_7C
PATCH_00:       gems_digital 4
PATCH_01:       gems_fm $0B, $00, 3, 2, 3, 0, 5                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   0,   9,   2,  31,   0,  24,  17,   5,  11   ; +$0
                gems_op   0,   1,  18,   1,  31,   0,  17,   5,  11,  11   ; +$4
                gems_op   3,   0,  27,   1,  31,   0,  19,   6,  10,  11   ; +$8
                gems_op   0,   0,  10,   1,  31,   0,   1,   6,   2,  10   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_02:       gems_fm $09, $00, 0, 4, 3, 0, 1                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   1,  13,   1,  28,   1,  13,   9,  14,   9   ; +$0
                gems_op   0,   4,   3,   2,  29,   1,  19,   2,  12,   8   ; +$4
                gems_op   7,   3,   7,   0,  30,   1,   5,   0,   4,  15   ; +$8
                gems_op   6,   4,  17,   0,  28,   0,   7,   0,   0,  15   ; +$C
                gems_ch3 $313B, $2B78, $084E, $3300
                gems_keyon $F, 0
PATCH_03:       gems_fm $00, $00, 2, 3, 3, 1, 2                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   1,   0,  20,   3,  31,   0,  10,  15,  12,   0   ; +$0
                gems_op   1,   0,  21,   0,  25,   1,   0,  31,   1,   2   ; +$4
                gems_op   0,   3,   7,   0,  29,   1,   0,  24,   0,   0   ; +$8
                gems_op   0,   0,   9,   0,  28,   0,   0,   0,   0,  13   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_04:       gems_fm $00, $00, 7, 3, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   7,   4,   0,   0,  24,   1,  14,  31,   0,  15   ; +$0
                gems_op   0,   0,   0,   0,  31,   0,  25,  11,   5,  15   ; +$4
                gems_op   3,   3,  49,   0,  23,   0,   0,  24,   0,  12   ; +$8
                gems_op   0,   0,   4,   0,  23,   0,  25,   8,   0,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $E, 0
PATCH_05:       gems_fm $09, $00, 0, 0, 3, 3, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   7,   2,   8,   1,  19,   0,   7,  31,   4,   0   ; +$0
                gems_op   3,   5,  23,   0,  29,   0,  18,  31,  15,  15   ; +$4
                gems_op   7,   0,  17,   1,  27,   0,  13,  31,   0,   3   ; +$8
                gems_op   7,   1,   5,   0,  31,   1,   0,  18,   0,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_06:       gems_fm $0F, $00, 0, 4, 3, 1, 1                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   1,   1,   2,  20,   0,   3,  15,   0,   8   ; +$0
                gems_op   0,   2,   0,   1,  22,   1,   6,  11,   0,   8   ; +$4
                gems_op   0,   0,   0,   0,  30,   0,   6,   5,   0,   8   ; +$8
                gems_op   0,   0,   0,   0,  31,   0,  12,  18,   0,  12   ; +$C
                gems_ch3 $0000, $0000, $0000, $0000
                gems_keyon $F, 0
PATCH_07:       gems_fm $0B, $00, 5, 2, 3, 0, 4                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,  15,   0,  31,   0,  15,  14,   8,  12   ; +$0
                gems_op   5,   0,  25,   1,  27,   0,  15,  19,  15,   8   ; +$4
                gems_op   0,   0,  14,   1,  27,   0,   4,  10,  15,   8   ; +$8
                gems_op   6,   1,   0,   1,  31,   0,   9,   0,   3,  10   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_08:       gems_fm $00, $00, 6, 4, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   1,   3,  12,   3,  31,   0,   6,  17,  11,  10   ; +$0
                gems_op   0,   0,   8,   3,  31,   0,   8,  20,   0,  10   ; +$4
                gems_op   0,   0,   7,   2,  31,   0,  14,  31,  15,  10   ; +$8
                gems_op   0,   0,   0,   0,  31,   0,  16,  16,   6,   9   ; +$C
                gems_ch3 $1F35, $3FB7, $3FB6, $3F70
                gems_keyon $F, 0
PATCH_09:       gems_fm $08, $40, 6, 2, 3, 0, 3                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   1,  42,   1,  16,   1,   5,   2,   1,   1   ; +$0
                gems_op   0,   2,  38,   1,  31,   1,   5,   2,   1,   1   ; +$4
                gems_op   7,   2,  27,   2,  25,   1,   5,   2,   1,   1   ; +$8
                gems_op   3,   1,   7,   2,  21,   0,  15,   2,  15,   9   ; +$C
                gems_ch3 $38AB, $3464, $3D11, $3336
                gems_keyon $F, 0
PATCH_0A:       gems_fm $0A, $00, 7, 5, 3, 3, 2                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,   6,   0,  31,   0,  11,   9,  15,  12   ; +$0
                gems_op   0,   1,  10,   0,  31,   0,  17,  25,   9,  12   ; +$4
                gems_op   0,   1,   0,   3,  31,   0,  19,  25,  15,  12   ; +$8
                gems_op   0,   1,  14,   0,  29,   0,  17,  31,   7,  15   ; +$C
                gems_ch3 $1FE0, $1FEF, $2002, $1FFF
                gems_keyon $F, 0
PATCH_0B:       gems_fm $09, $00, 6, 1, 3, 2, 3                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   7,   0,  16,   3,  25,   0,  19,   1,   0,   8   ; +$0
                gems_op   1,   1,  30,   0,  25,   0,  28,   1,   0,   4   ; +$4
                gems_op   3,   1,  25,   0,  24,   0,  31,   1,   0,   8   ; +$8
                gems_op   1,   1,   7,   0,  27,   0,   0,   2,   0,   6   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_0C:       gems_fm $03, $00, 6, 3, 3, 0, 3                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,  13,  26,   2,  31,   0,  14,   0,  13,  15   ; +$0
                gems_op   0,   0,  26,   0,  31,   0,   9,   0,  13,  10   ; +$4
                gems_op   0,   1,  25,   0,  31,   0,  13,   0,  13,  15   ; +$8
                gems_op   0,   0,   0,   0,  31,   1,   9,   0,  13,  11   ; +$C
                gems_ch3 $0000, $0000, $0000, $0000
                gems_keyon $F, 0
PATCH_0D:       gems_fm $0A, $00, 6, 5, 3, 1, 2                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   2,   1,  23,   2,  14,   0,   0,   1,   4,   7   ; +$0
                gems_op   2,   0,  19,   2,  21,   0,   0,   2,   1,   7   ; +$4
                gems_op   3,   1,  11,   2,  27,   0,   5,   2,   3,   6   ; +$8
                gems_op   1,   4,  13,   2,  20,   1,   0,   2,   0,   8   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_0E:       gems_psg_noise $7, $1F, $36, $F6, $1F, $6
PATCH_0F:       gems_fm $0B, $00, 3, 3, 3, 2, 3                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   3,   2,   0,   3,   1,   4,   9,   2,   8   ; +$0
                gems_op   3,   0,  12,   0,  27,   0,  10,   5,   9,   4   ; +$4
                gems_op   7,   2,  25,   0,  19,   1,  11,   6,   2,   8   ; +$8
                gems_op   0,   0,  16,   0,  15,   0,   1,  31,  10,   6   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_10:       gems_fm $00, $00, 2, 2, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   1,  29,   3,  24,   0,  11,  11,   5,   0   ; +$0
                gems_op   1,   2,  40,   3,  19,   0,   0,  20,  11,   0   ; +$4
                gems_op   3,   7,  21,   3,  22,   0,   5,   0,   2,   0   ; +$8
                gems_op   0,   2,   7,   2,  22,   1,   7,   6,   2,   7   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_11:       gems_fm $0C, $00, 4, 7, 3, 1, 5                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,  14,   0,  20,   1,   4,   0,  10,   7   ; +$0
                gems_op   0,   1,  24,   1,  20,   1,   4,   4,  13,   7   ; +$4
                gems_op   0,   3,  15,   1,  26,   0,   9,   2,   9,   7   ; +$8
                gems_op   0,   1,  25,   1,  31,   0,   9,   6,   9,   7   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 1
PATCH_12:       gems_fm $03, $00, 5, 2, 2, 2, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,  27,   1,  31,   0,   1,   2,   8,   1   ; +$0
                gems_op   0,   4,  35,   1,  31,   0,   5,   2,   5,   1   ; +$4
                gems_op   7,  11,  31,   2,  31,   0,  11,   2,   3,   1   ; +$8
                gems_op   3,   0,  18,   2,  20,   0,   1,   2,   6,   7   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_13:       gems_fm $0F, $00, 0, 0, 3, 1, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   7,   0,   0,   1,   0,   1,  29,  31,   9,   0   ; +$0
                gems_op   6,   3,  31,   1,  29,   0,  15,  31,  15,   3   ; +$4
                gems_op   7,   0,   0,   1,  31,   1,   0,  24,   0,   3   ; +$8
                gems_op   7,   0,  10,   0,  31,   0,   0,  12,   0,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $C, 0
PATCH_14:       gems_fm $0B, $00, 7, 0, 3, 1, 2                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   1,  39,   0,  24,   1,  23,   0,   0,   6   ; +$0
                gems_op   0,   1,  36,   0,  22,   0,  31,   0,   0,   7   ; +$4
                gems_op   0,   1,  35,   0,  16,   1,  31,   0,   0,   1   ; +$8
                gems_op   0,   4,  11,   0,  24,   0,  31,   0,   0,   9   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_15:       gems_fm $0A, $00, 3, 5, 3, 0, 3                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   2,   0,  20,   0,  21,   0,   1,   0,   0,  15   ; +$0
                gems_op   6,   1,  16,   0,  14,   0,   9,   0,   0,  15   ; +$4
                gems_op   3,   1,  18,   0,  15,   1,   5,   2,   0,  15   ; +$8
                gems_op   0,   4,  25,   0,  15,   1,  21,   3,   0,  15   ; +$C
                gems_ch3 $2005, $0C03, $1FCB, $1FDA
                gems_keyon $F, 0
PATCH_16:       gems_fm $0B, $00, 5, 2, 3, 0, 5                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   1,   0,   3,   2,  31,   0,  25,   8,  12,  11   ; +$0
                gems_op   0,   0,  12,   1,  31,   0,  19,   5,  11,  11   ; +$4
                gems_op   3,   1,  10,   1,  31,   0,  25,   6,  10,  11   ; +$8
                gems_op   0,   2,   5,   1,  31,   0,  14,  17,   2,  11   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_17:       gems_fm $00, $00, 4, 4, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   8,   1,   1,  31,   0,  15,  28,  11,   4   ; +$0
                gems_op   1,  12,   0,   3,  28,   1,  14,   0,  15,   4   ; +$4
                gems_op   7,   7,   0,   3,  31,   1,  13,  16,  11,   9   ; +$8
                gems_op   7,   0,   0,   3,  31,   0,  14,  16,  13,   9   ; +$C
                gems_ch3 $2075, $205F, $205E, $2000
                gems_keyon $F, 0
PATCH_18:       gems_fm $0C, $00, 5, 2, 3, 0, 1                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   0,  24,   2,  12,   0,   5,   0,   0,  11   ; +$0
                gems_op   1,   0,  34,   3,  12,   0,   9,  18,   5,  11   ; +$4
                gems_op   3,   0,  33,   3,  12,   0,  10,   0,  15,  11   ; +$8
                gems_op   0,   0,  10,   2,  31,   0,   7,  12,   5,  11   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_19:       gems_fm $00, $00, 7, 4, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   3,   3,   3,  31,   0,   3,  17,  15,   5   ; +$0
                gems_op   0,   3,   4,   3,  31,   0,  20,  20,  13,   8   ; +$4
                gems_op   0,   0,   6,   2,  31,   0,  12,  31,  15,   8   ; +$8
                gems_op   0,   0,   5,   2,  31,   0,   5,  16,   6,   8   ; +$C
                gems_ch3 $1F35, $3FB7, $3FB6, $3F70
                gems_keyon $F, 0
PATCH_1A:       gems_fm $03, $40, 7, 0, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   6,  39,   1,  31,   0,   7,   0,   9,   5   ; +$0
                gems_op   0,   3,   0,   3,  31,   0,  18,   9,   4,   6   ; +$4
                gems_op   3,   2,   0,   2,  31,   0,  17,   7,   0,   6   ; +$8
                gems_op   0,  15,   0,   3,  31,   0,  30,  16,   1,   9   ; +$C
                gems_ch3 $0708, $07C2, $07D0, $0064
                gems_keyon $F, 0
PATCH_1B:       gems_fm $0C, $00, 5, 2, 3, 0, 1                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   0,  21,   2,  14,   0,   5,   0,   0,   9   ; +$0
                gems_op   1,   2,  38,   3,  13,   0,   9,  18,   5,   0   ; +$4
                gems_op   3,   3,  37,   3,  13,   0,  10,   0,  15,  15   ; +$8
                gems_op   0,   0,  17,   2,  13,   0,   7,  12,   5,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_1C:       gems_fm $0A, $00, 7, 2, 3, 2, 3                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   1,  30,   0,  14,   0,   4,   0,   1,   8   ; +$0
                gems_op   7,   0,  55,   0,   8,   0,   9,   3,   0,   8   ; +$4
                gems_op   3,   7,  31,   0,  12,   0,  16,   0,   0,   8   ; +$8
                gems_op   0,   2,  23,   2,  10,   0,  10,   0,   1,   8   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_1D:       gems_fm $00, $00, 7, 4, 1, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   2,  10,   3,  24,   0,  28,  13,   3,  15   ; +$0
                gems_op   0,   1,  29,   1,  21,   1,  20,  23,  12,  11   ; +$4
                gems_op   7,   2,   6,   3,  26,   0,  11,  12,   4,  11   ; +$8
                gems_op   2,   1,   8,   1,  27,   1,   7,  19,  10,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_1E:       gems_fm $0B, $00, 0, 4, 3, 1, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   1,  41,   0,  31,   1,  10,   0,   0,  15   ; +$0
                gems_op   0,   7,  37,   2,  29,   0,   0,  24,   4,   7   ; +$4
                gems_op   7,   3,  15,   0,  14,   0,   0,   0,  13,  11   ; +$8
                gems_op   0,   1,  17,   0,  26,   0,  24,   9,   0,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_1F:       gems_fm $00, $00, 2, 2, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   1,  29,   3,  24,   0,  11,  11,   5,   0   ; +$0
                gems_op   1,   2,  40,   3,  19,   0,   0,  20,  11,   0   ; +$4
                gems_op   3,   7,  21,   3,  22,   0,   5,   0,   2,   0   ; +$8
                gems_op   0,   2,  16,   2,  22,   1,   7,   6,   2,   7   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_20:       gems_fm $0A, $00, 1, 5, 3, 1, 1                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,   0,   0,  31,   1,  17,  31,   8,  15   ; +$0
                gems_op   0,   1,   0,   1,  31,   0,  21,  22,   2,  11   ; +$4
                gems_op   0,   0,   0,   0,  31,   0,  13,  31,   5,  15   ; +$8
                gems_op   7,   0,   0,   2,  31,   0,  15,  31,   4,  15   ; +$C
                gems_ch3 $0000, $0000, $0000, $0000
                gems_keyon $F, 0
PATCH_21:       gems_fm $0B, $00, 2, 2, 3, 0, 3                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   6,   4,  24,   0,  22,   1,   5,   0,   0,  12   ; +$0
                gems_op   0,   2,  21,   0,  20,   1,   8,   3,   5,  11   ; +$4
                gems_op   0,   0,   0,   0,  18,   1,  11,   7,   2,  11   ; +$8
                gems_op   0,   0,   0,   3,  31,   1,   9,   9,  15,   8   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_22:       gems_fm $03, $00, 0, 0, 3, 0, 5                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,  24,   0,  31,   0,   0,   0,   9,   5   ; +$0
                gems_op   0,   1,   7,   0,  31,   0,  31,  12,   0,   8   ; +$4
                gems_op   0,   0,  18,   3,  31,   0,  17,  16,   2,   8   ; +$8
                gems_op   0,   5,   0,   2,  31,   1,  20,  17,   8,  12   ; +$C
                gems_ch3 $2019, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_23:       gems_fm $0B, $00, 7, 3, 3, 2, 3                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   3,  23,   0,  30,   0,  24,  12,   6,   8   ; +$0
                gems_op   0,   0,  17,   0,  20,   0,  28,   5,   2,   4   ; +$4
                gems_op   7,   2,  25,   0,  19,   0,  31,   6,   3,   8   ; +$8
                gems_op   0,   0,   8,   0,  15,   0,   1,  31,  10,   6   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $E, 0
PATCH_24:       gems_fm $03, $00, 7, 1, 3, 0, 3                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   1,  24,   0,  31,   0,  16,   7,  12,   9   ; +$0
                gems_op   0,   0,  32,   1,  31,   0,   9,   0,  15,   9   ; +$4
                gems_op   3,   1,  30,   1,  31,   0,  17,   0,  15,   9   ; +$8
                gems_op   0,   0,   0,   1,  31,   1,   9,   0,  15,   9   ; +$C
                gems_ch3 $0000, $0000, $0000, $0000
                gems_keyon $F, 0
PATCH_25:       gems_fm $0B, $00, 1, 4, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,   4,   2,   7,   0,  11,   9,   1,   4   ; +$0
                gems_op   5,   0,   6,   2,  26,   0,  29,   6,   0,  11   ; +$4
                gems_op   1,   2,   7,   2,  30,   0,  22,   2,   1,  11   ; +$8
                gems_op   0,   2,   6,   2,  28,   0,   2,  10,   1,  12   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_26:       gems_psg_noise $4, $FF, $B, $7, $FF, $F
PATCH_27:       gems_fm $09, $00, 3, 4, 3, 0, 3                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   2,   0,  23,   0,  15,   0,   1,   0,   2,  15   ; +$0
                gems_op   1,   1,  30,   0,  10,   0,   9,   0,   0,  15   ; +$4
                gems_op   1,   1,  18,   0,  14,   1,   5,   2,   0,  15   ; +$8
                gems_op   0,   4,  17,   0,   8,   1,  21,   3,   0,  15   ; +$C
                gems_ch3 $2005, $0C03, $1FCB, $1FDA
                gems_keyon $F, 0
PATCH_28:       gems_fm $0C, $00, 3, 4, 3, 0, 4                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   1,  60,   3,   0,   0,   6,   0,   4,   8   ; +$0
                gems_op   7,   0,   4,   0,  12,   0,  14,   5,   4,   8   ; +$4
                gems_op   0,   2,  18,   0,  13,   0,   5,   3,   2,   8   ; +$8
                gems_op   0,   3,  13,   0,   6,   0,  11,   5,   5,   8   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_29:       gems_fm $03, $00, 5, 2, 3, 0, 5                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   1,   0,   5,   1,  31,   0,  25,   8,  12,  11   ; +$0
                gems_op   0,   0,  15,   0,  30,   0,  19,   5,  11,  11   ; +$4
                gems_op   3,   1,  10,   0,  31,   0,  25,   6,  10,  11   ; +$8
                gems_op   0,   1,   5,   0,  31,   0,  14,  17,   2,  11   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_2A:       gems_fm $03, $00, 7, 4, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   1,  15,   2,   3,  31,   0,   3,  20,  15,  12   ; +$0
                gems_op   0,   0,  59,   2,  31,   0,  14,  19,   0,  15   ; +$4
                gems_op   0,   2,   5,   3,  31,   0,  12,  14,  15,  14   ; +$8
                gems_op   0,   1,  66,   0,  31,   0,  14,  17,   0,  14   ; +$C
                gems_ch3 $1F35, $3FB7, $3FB6, $3F70
                gems_keyon $F, 0
PATCH_2B:       gems_fm $0B, $40, 0, 2, 3, 1, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   1,  15,   6,   3,  31,   1,  13,  27,  15,   4   ; +$0
                gems_op   0,  12,   0,   0,  30,   1,   3,   1,   6,   5   ; +$4
                gems_op   0,  15,  33,   0,  31,   1,  11,   1,   4,   7   ; +$8
                gems_op   0,  14,   0,   3,  30,   0,   9,   2,  15,   5   ; +$C
                gems_ch3 $2511, $2328, $205E, $2328
                gems_keyon $E, 0
PATCH_2C:       gems_fm $05, $00, 7, 4, 3, 1, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   1,   0,   2,  31,   1,  11,  10,   2,   3   ; +$0
                gems_op   3,   3,   0,   1,  23,   0,   3,  16,   0,   3   ; +$4
                gems_op   0,   0,   1,   0,  31,   0,   4,  12,   0,   8   ; +$8
                gems_op   7,   0,   0,   1,  31,   0,   6,   5,   0,   9   ; +$C
                gems_ch3 $0000, $0000, $0000, $0000
                gems_keyon $F, 0
PATCH_2D:       gems_fm $08, $00, 0, 2, 3, 0, 3                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,   4,   0,   2,   0,   2,  10,   1,   4   ; +$0
                gems_op   0,   0,   6,   0,   4,   1,   0,   1,   4,   3   ; +$4
                gems_op   0,   0,  14,   0,   4,   0,   1,   8,   0,   2   ; +$8
                gems_op   0,   0,   7,   0,   6,   1,   2,   0,   7,   4   ; +$C
                gems_ch3 $0000, $0000, $0000, $0000
                gems_keyon $F, 0
PATCH_2E:       gems_fm $0B, $00, 2, 2, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   5,   1,  24,   3,  18,   0,   5,   0,   2,   0   ; +$0
                gems_op   1,   3,  59,   3,  21,   0,   6,   0,   5,   0   ; +$4
                gems_op   0,  10,  22,   3,  20,   0,   8,   0,   2,   0   ; +$8
                gems_op   0,   1,   1,   2,  20,   0,   8,   6,   2,   4   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_2F:       gems_fm $0B, $00, 2, 2, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   5,   1,  35,   3,  24,   0,   5,   0,   2,  12   ; +$0
                gems_op   1,   3,  59,   3,  29,   0,   6,   0,   5,  12   ; +$4
                gems_op   0,  10,  22,   3,  29,   0,   8,   0,   2,  15   ; +$8
                gems_op   0,   1,   1,   2,  31,   0,   8,   6,   2,  12   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_30:       gems_fm $0C, $00, 7, 5, 3, 1, 5                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,  28,   2,  10,   0,   6,   1,   6,   7   ; +$0
                gems_op   0,   1,   9,   2,   8,   0,  13,  10,   2,   7   ; +$4
                gems_op   0,   0,  11,   2,  20,   1,   7,   2,   1,   7   ; +$8
                gems_op   5,   1,  22,   2,  11,   1,   7,   0,   1,   7   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_31:       gems_fm $0C, $00, 7, 5, 3, 1, 5                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,  27,   2,  12,   0,   6,   1,   6,  10   ; +$0
                gems_op   0,   0,  17,   2,  15,   0,  13,  10,   2,  10   ; +$4
                gems_op   0,   1,  17,   2,  15,   1,   7,   2,   1,  10   ; +$8
                gems_op   5,   1,  17,   2,  15,   1,   0,   0,   1,  10   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_32:       gems_fm $07, $00, 7, 4, 3, 3, 7                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   1,   0,  11,   3,  21,   0,  17,  31,  15,   4   ; +$0
                gems_op   6,   1,  13,   3,  31,   0,  17,  31,  15,  15   ; +$4
                gems_op   3,   0,   6,   0,  29,   0,   3,  14,   0,  15   ; +$8
                gems_op   7,   0,   4,   0,  29,   0,   3,  15,   0,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_33:       gems_fm $03, $00, 7, 4, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   1,  15,   2,   3,  31,   0,   3,  20,  15,   5   ; +$0
                gems_op   0,   0,  59,   2,  31,   0,  14,  19,   0,  15   ; +$4
                gems_op   0,   2,   5,   3,  31,   0,  12,  14,  15,  14   ; +$8
                gems_op   0,   1,  66,   0,  31,   0,  14,  17,   0,  14   ; +$C
                gems_ch3 $1F35, $3FB7, $3FB6, $3F70
                gems_keyon $F, 0
PATCH_34:       gems_psg_noise $F, $FF, $34, $E5, $3, $3
PATCH_35:       gems_fm $07, $40, 0, 2, 3, 1, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   1,  15,  11,   1,  31,   1,   5,  27,  15,   4   ; +$0
                gems_op   0,  15,  10,   0,  30,   1,   0,  22,   4,   5   ; +$4
                gems_op   0,  14,  39,   0,  31,   1,   2,   1,  15,   7   ; +$8
                gems_op   0,  15,   3,   2,  30,   0,   9,  31,  10,   5   ; +$C
                gems_ch3 $252F, $2343, $20FC, $2337
                gems_keyon $F, 0
PATCH_36:       gems_psg_noise $5, $FF, $F, $3, $4, $1F
PATCH_37:       gems_fm $08, $00, 3, 3, 3, 0, 1                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   1,  30,   0,  28,   0,  17,  31,   6,  15   ; +$0
                gems_op   0,   0,  25,   3,  30,   0,   2,  11,  15,  15   ; +$4
                gems_op   0,   4,  28,   2,  29,   0,  13,  24,   6,   3   ; +$8
                gems_op   0,   1,   9,   3,  31,   0,   1,   1,   3,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_38:       gems_psg_tone $FF, $37, $C7, $7, $7
PATCH_39:       gems_fm $0B, $40, 0, 2, 3, 1, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   1,  15,  23,   3,  31,   1,   8,  27,  15,   4   ; +$0
                gems_op   0,   9,   1,   0,  30,   1,   4,   1,   6,   5   ; +$4
                gems_op   0,  15,  38,   0,  31,   1,  11,   1,   4,   7   ; +$8
                gems_op   0,  14,   0,   3,  30,   0,   7,   2,   4,   5   ; +$C
                gems_ch3 $251C, $2328, $205E, $2328
                gems_keyon $E, 0
PATCH_3A:       gems_fm $0B, $00, 7, 4, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   2,   1,  29,   0,  25,   0,  10,   0,  11,  10   ; +$0
                gems_op   5,   6,  25,   1,  25,   0,   9,  12,  10,  15   ; +$4
                gems_op   2,   5,  17,   0,  24,   0,   0,   6,  10,  11   ; +$8
                gems_op   5,  12,  20,   1,  28,   0,   7,  25,  10,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_3B:       gems_psg_noise $F, $FF, $22, $D2, $5, $5
PATCH_3C:       gems_fm $0B, $00, 3, 2, 3, 1, 4                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   6,   1,  39,   3,  31,   1,   9,   7,   0,  10   ; +$0
                gems_op   5,   0,  19,   0,  27,   0,  18,   5,  11,  10   ; +$4
                gems_op   1,   0,  23,   1,  26,   0,   9,   0,  15,  10   ; +$8
                gems_op   0,   1,   0,   0,  31,   0,   9,   0,   3,  10   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_3D:       gems_fm $08, $40, 7, 2, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,  15,  42,   1,  31,   1,   5,   2,   1,   1   ; +$0
                gems_op   0,  15,  38,   1,  31,   1,   5,   2,   1,   1   ; +$4
                gems_op   7,  15,  27,   2,  31,   1,   5,   2,   1,   1   ; +$8
                gems_op   3,  13,   1,   2,  31,   0,  15,   2,  15,   9   ; +$C
                gems_ch3 $38AB, $3464, $3D11, $3336
                gems_keyon $F, 0
PATCH_3E:       gems_fm $07, $00, 5, 2, 3, 2, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   1,  25,   1,  31,   0,  10,   2,   8,   2   ; +$0
                gems_op   0,   3,  38,   1,  31,   0,   5,   2,   5,   2   ; +$4
                gems_op   7,  12,  30,   2,  31,   0,  11,   2,   3,   2   ; +$8
                gems_op   3,   2,  25,   2,  20,   0,   8,   2,  10,   7   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_3F:       gems_psg_noise $7, $1E, $F, $1, $1, $2
PATCH_40:       gems_fm $00, $40, 2, 0, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   2,   0,   0,  12,   0,   0,   8,   0,  12   ; +$0
                gems_op   0,   0,   0,   0,  28,   0,  15,   4,   0,  12   ; +$4
                gems_op   0,   0,   5,   0,  12,   0,   0,  10,   0,  12   ; +$8
                gems_op   0,   0,   0,   0,  31,   0,   7,  14,   1,  12   ; +$C
                gems_ch3 $02EE, $01F4, $000A, $0064
                gems_keyon $F, 0
PATCH_41:       gems_psg_tone $FF, $9, $6, $1B, $FF
PATCH_42:       gems_fm $0F, $00, 5, 6, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   1,   7,  21,   0,  31,   0,   0,   2,   0,  15   ; +$0
                gems_op   0,   6,  25,   0,  10,   0,   0,  15,   1,  15   ; +$4
                gems_op   5,   8,  25,   0,  10,   0,   0,  15,   1,  15   ; +$8
                gems_op   0,  12,  25,   0,  10,   0,   0,  15,   1,  15   ; +$C
                gems_ch3 $0000, $0000, $0000, $0000
                gems_keyon $F, 0
PATCH_43:       gems_fm $03, $00, 5, 2, 3, 2, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,  25,   1,  31,   0,   1,   2,   8,   1   ; +$0
                gems_op   0,   3,  35,   1,  31,   0,   5,   2,   5,   1   ; +$4
                gems_op   7,  12,  31,   2,  31,   0,  11,   2,   3,   1   ; +$8
                gems_op   3,   2,  18,   2,  20,   0,   1,   2,   6,   7   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_44:       gems_fm $0E, $00, 5, 3, 3, 1, 5                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   7,   1,  41,   0,  21,   0,  15,   0,   8,   8   ; +$0
                gems_op   2,   0,   7,   0,  16,   0,  24,   0,   2,  11   ; +$4
                gems_op   0,   0,   3,   0,  12,   1,  23,   0,   3,  12   ; +$8
                gems_op   2,   4,   0,   0,  15,   1,  25,   2,  15,  13   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_45:       gems_fm $08, $00, 6, 3, 3, 2, 2                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   7,   0,  27,   2,  31,   1,   6,   6,   0,   4   ; +$0
                gems_op   3,   0,   8,   0,  31,   0,  12,   6,   0,   6   ; +$4
                gems_op   7,   0,   1,   0,  27,   0,  12,   3,   8,  10   ; +$8
                gems_op   7,   1,   0,   0,  26,   1,  13,   0,   0,  10   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_46:       gems_fm $0B, $00, 3, 6, 3, 2, 5                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   5,   7,  19,   1,  24,   1,  11,   0,   7,  15   ; +$0
                gems_op   6,   1,   0,   1,  30,   0,   9,   4,   4,  15   ; +$4
                gems_op   2,   1,  10,   1,  31,   0,  13,   2,   6,  15   ; +$8
                gems_op   1,   1,   1,   1,  31,   0,  11,   6,   6,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 1
PATCH_47:       gems_digital 4
PATCH_48:       gems_fm $00, $00, 0, 5, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,   0,   2,  31,   0,   4,  13,   7,  12   ; +$0
                gems_op   3,  12,  20,   3,  31,   0,   7,  31,  11,  15   ; +$4
                gems_op   7,  15,  25,   1,  21,   0,   2,   5,   4,  12   ; +$8
                gems_op   0,   6,  25,   1,  31,   0,   9,   0,   1,  15   ; +$C
                gems_ch3 $3FFF, $3FFF, $3FFF, $0000
                gems_keyon $F, 0
PATCH_49:       gems_fm $00, $00, 3, 6, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   5,   4,  21,   1,  24,   1,  11,   0,   7,   6   ; +$0
                gems_op   6,   1,   0,   1,  30,   0,   9,   4,   4,   6   ; +$4
                gems_op   2,   3,  26,   1,  31,   0,  13,   2,   6,   6   ; +$8
                gems_op   1,   3,  26,   1,  31,   0,  11,   6,   6,   6   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 1
PATCH_4A:       gems_fm $03, $00, 7, 2, 3, 1, 2                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   1,  34,   1,  21,   1,   2,   3,   6,   8   ; +$0
                gems_op   7,   1,  25,   1,  27,   0,  15,   0,   1,   5   ; +$4
                gems_op   3,   2,   5,   1,  29,   1,  15,   3,   1,   5   ; +$8
                gems_op   0,   3,   7,   0,  29,   0,   4,  16,   5,   8   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_4B:       gems_fm $09, $00, 2, 3, 3, 0, 2                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   5,   2,  20,   0,   2,   1,   7,   0,   0,  12   ; +$0
                gems_op   5,   1,  23,   2,   6,   0,  12,   0,   1,  12   ; +$4
                gems_op   1,   4,  44,   0,  18,   1,   2,   0,   1,  12   ; +$8
                gems_op   1,   1,  25,   0,  12,   0,  16,   0,   0,  12   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_4C:       gems_fm $0A, $00, 6, 2, 3, 0, 2                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   1,  30,   0,  28,   0,   4,   0,   1,   6   ; +$0
                gems_op   7,   2,  52,   0,  12,   0,   9,   3,   2,   4   ; +$4
                gems_op   3,   7,  22,   0,  17,   0,  16,   0,   6,  11   ; +$8
                gems_op   0,   2,  28,   2,  11,   0,  10,   0,   1,   8   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_4D:       gems_fm $0F, $00, 0, 2, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   0,   0,   0,  31,   0,  31,  15,   9,  12   ; +$0
                gems_op   7,   0,   0,   0,  31,   0,  18,   0,  15,  12   ; +$4
                gems_op   7,   0,   9,   1,  31,   0,  31,   2,  11,  12   ; +$8
                gems_op   7,   0,   0,   0,  30,   0,   0,   0,   0,  12   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_4E:       gems_fm $0C, $00, 7, 5, 3, 1, 5                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,  27,   2,  10,   0,   6,   1,   6,  10   ; +$0
                gems_op   0,   1,   9,   2,  15,   0,  13,  10,   2,  15   ; +$4
                gems_op   0,   0,  11,   2,  23,   1,   7,   2,   1,  15   ; +$8
                gems_op   5,   1,  22,   2,  25,   1,   7,   0,   1,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_4F:       gems_fm $08, $00, 0, 4, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   4,   5,  27,   0,  31,   1,  19,   7,   7,  14   ; +$0
                gems_op   2,   2,  37,   2,  31,   1,  18,   4,   8,   2   ; +$4
                gems_op   3,   1,  16,   0,  30,   0,  15,   7,  15,  15   ; +$8
                gems_op   0,   1,  27,   0,  31,   0,  15,   2,  15,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_50:       gems_fm $00, $00, 6, 2, 3, 1, 3                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,  18,   3,  31,   0,   5,   0,   2,   5   ; +$0
                gems_op   0,   2,  36,   3,  31,   0,   6,  18,   5,   5   ; +$4
                gems_op   0,   5,  15,   3,  31,   0,   9,   0,   8,   5   ; +$8
                gems_op   0,   0,  12,   2,  31,   0,   7,   0,   0,   5   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_51:       gems_fm $09, $00, 5, 5, 3, 2, 2                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,  26,   2,  12,   0,  13,   1,   2,  10   ; +$0
                gems_op   0,   0,  27,   2,  10,   0,   8,   0,   2,  10   ; +$4
                gems_op   0,   0,  18,   2,  23,   1,   7,   2,   1,  10   ; +$8
                gems_op   5,   1,  14,   2,  23,   1,   7,   0,   1,  10   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_52:       gems_fm $0A, $00, 4, 4, 3, 1, 4                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,  10,   2,  31,   0,   4,  13,   7,   8   ; +$0
                gems_op   3,   1,  12,   3,  31,   0,   7,  31,  11,  15   ; +$4
                gems_op   7,   1,   7,   1,  31,   0,   2,   5,   4,   8   ; +$8
                gems_op   0,   0,  10,   1,  31,   0,   9,   0,   1,  15   ; +$C
                gems_ch3 $3FFF, $3FFF, $3FFF, $0000
                gems_keyon $F, 0
PATCH_53:       gems_fm $0A, $00, 6, 2, 3, 0, 2                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   1,  30,   0,  28,   0,   4,   0,   1,   6   ; +$0
                gems_op   7,   2,  52,   0,  12,   0,   9,   3,   2,   4   ; +$4
                gems_op   3,   7,  21,   0,  17,   0,  16,   0,   6,  11   ; +$8
                gems_op   0,   2,   6,   2,  11,   0,  10,   0,   1,   8   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_54:       gems_fm $00, $00, 0, 6, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   2,   0,   2,  25,   0,  31,  30,   3,   4   ; +$0
                gems_op   3,   0,  16,   1,  20,   0,   0,  15,  11,   6   ; +$4
                gems_op   7,   0,  13,   1,  24,   0,   0,  15,  10,   6   ; +$8
                gems_op   3,   0,  22,   1,  24,   0,   0,   6,   2,  10   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_55:       gems_fm $0F, $00, 7, 5, 3, 1, 2                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   1,  23,   2,  22,   0,  16,   4,   0,   4   ; +$0
                gems_op   0,   3,  23,   0,  26,   0,   0,   0,   2,   8   ; +$4
                gems_op   1,   2,   9,   3,  24,   0,   0,   0,   0,   5   ; +$8
                gems_op   6,   1,  15,   0,  21,   1,   0,   0,   0,   7   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_56:       gems_fm $0B, $00, 7, 6, 3, 1, 4                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   9,  51,   0,  30,   0,  11,   6,  10,  11   ; +$0
                gems_op   0,   0,  14,   0,  31,   0,   6,   6,   4,  11   ; +$4
                gems_op   7,   2,  17,   0,  19,   0,  10,   6,   7,  11   ; +$8
                gems_op   0,   1,  22,   0,  19,   0,  10,   6,   7,  11   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $0000
                gems_keyon $F, 0
PATCH_57:       gems_fm $0A, $00, 6, 4, 3, 1, 4                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   5,  18,   2,  26,   1,   2,  11,   0,   3   ; +$0
                gems_op   2,   4,  33,   2,  25,   1,   7,  19,  11,   3   ; +$4
                gems_op   0,   1,  27,   1,  22,   0,   0,   0,   1,   5   ; +$8
                gems_op   0,   8,  32,   1,  31,   0,  25,  20,   9,   3   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_58:       gems_fm $00, $00, 0, 4, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   2,   1,  10,   2,   4,   0,  20,   0,   6,  15   ; +$0
                gems_op   0,   1,   9,   2,   6,   0,  15,   0,   7,  15   ; +$4
                gems_op   0,   3,   4,   0,  16,   0,  31,   0,   1,  15   ; +$8
                gems_op   0,   1,   5,   0,  17,   0,  31,   0,   1,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_59:       gems_fm $0F, $00, 7, 0, 3, 3, 7                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   7,   0,   0,   2,   0,   0,  29,  31,   9,   0   ; +$0
                gems_op   7,   0,   0,   2,  31,   0,   0,  24,   0,   0   ; +$4
                gems_op   0,   0,   0,   3,  29,   1,  15,  31,  15,   0   ; +$8
                gems_op   7,   0,   0,   0,  31,   0,   0,  12,   0,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $C, 0
PATCH_5A:       gems_fm $00, $00, 0, 4, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   0,  20,   2,  25,   0,  31,  30,   3,   7   ; +$0
                gems_op   3,   1,  25,   1,  20,   0,   0,  15,  11,   7   ; +$4
                gems_op   7,   0,  16,   1,  24,   0,   0,   2,  10,   7   ; +$8
                gems_op   3,   0,  25,   1,  24,   0,   0,   6,   2,   7   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_5B:       gems_fm $00, $54, 3, 4, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   9,   0,   0,  10,   0,  16,   0,   0,  15   ; +$0
                gems_op   0,   0,   0,   3,  31,   0,  31,  31,   0,  15   ; +$4
                gems_op   1,   2,   0,   0,  31,   0,   0,  14,   0,  15   ; +$8
                gems_op   3,   0,   0,   3,  31,   0,  20,   0,   0,  15   ; +$C
                gems_ch3 $12F2, $1482, $0032, $1DB0
                gems_keyon $F, 0
PATCH_5C:       gems_fm $00, $00, 0, 5, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,   0,   0,  31,   0,  23,  29,   0,   9   ; +$0
                gems_op   0,   7,   0,   0,  31,   0,   0,  18,   0,  10   ; +$4
                gems_op   7,  11,   0,   0,  31,   0,  20,  18,   3,  10   ; +$8
                gems_op   3,  11,   0,   0,  31,   0,  23,  18,   0,  10   ; +$C
                gems_ch3 $0000, $0000, $0000, $0000
                gems_keyon $F, 0
PATCH_5D:       gems_fm $00, $00, 0, 1, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   2,   0,  19,   0,  16,   0,   0,   0,   0,   7   ; +$0
                gems_op   1,   2,   8,   0,  20,   0,   0,   0,   0,  15   ; +$4
                gems_op   6,   2,  19,   0,  16,   0,   9,   0,   0,  15   ; +$8
                gems_op   5,  15,  25,   0,  14,   0,  18,   0,   2,  15   ; +$C
                gems_ch3 $0000, $0000, $0000, $0000
                gems_keyon $F, 0
PATCH_5E:       gems_fm $00, $00, 7, 2, 3, 0, 2                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   7,   3,  22,   0,  18,   1,  10,   2,   1,   3   ; +$0
                gems_op   6,   2,  30,   0,  18,   0,  11,   0,   1,   3   ; +$4
                gems_op   5,   1,  19,   0,  17,   0,  11,   0,   0,   3   ; +$8
                gems_op   4,   4,   0,   0,  18,   0,   5,   3,   2,   7   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_5F:       gems_fm $0B, $00, 5, 2, 3, 2, 3                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   1,   0,  13,   3,  31,   0,   7,  15,  12,   0   ; +$0
                gems_op   1,   0,  30,   0,   7,   0,   4,   6,   0,   9   ; +$4
                gems_op   0,   3,  20,   1,   1,   0,   0,  18,   0,   9   ; +$8
                gems_op   0,   0,  12,   0,  25,   0,   0,   6,   0,   7   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_60:       gems_fm $0A, $00, 6, 5, 2, 1, 2                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   2,   1,  26,   2,  14,   0,   0,   1,   0,   7   ; +$0
                gems_op   2,   1,  22,   2,  12,   0,   0,   2,   1,   7   ; +$4
                gems_op   3,   2,  26,   2,  27,   0,   5,   2,   3,   6   ; +$8
                gems_op   3,   3,  16,   2,  20,   1,   0,   2,   0,   8   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_61:       gems_fm $0C, $00, 0, 2, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,  16,   3,  19,   0,   5,   0,   2,   5   ; +$0
                gems_op   0,   6,  39,   3,  31,   0,   6,  18,   5,   0   ; +$4
                gems_op   0,   6,  19,   3,  31,   0,  10,   0,   8,   5   ; +$8
                gems_op   0,   0,  10,   2,  31,   0,   7,   0,   0,   7   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_62:       gems_fm $0C, $00, 1, 1, 3, 0, 4                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,  39,   0,  31,   0,   9,   7,   0,   8   ; +$0
                gems_op   5,   0,  29,   1,  27,   0,  17,   0,  15,   8   ; +$4
                gems_op   0,   0,  17,   1,  26,   0,   9,   0,  15,   8   ; +$8
                gems_op   6,   1,   0,   1,  31,   0,   9,   0,   3,  10   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_63:       gems_fm $0A, $00, 3, 5, 3, 1, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   1,  18,   0,  31,   1,  10,   0,   9,  15   ; +$0
                gems_op   2,   2,   9,   0,  20,   0,   1,   0,   1,  15   ; +$4
                gems_op   3,   3,   9,   1,  16,   0,  13,  12,   3,  13   ; +$8
                gems_op   0,   0,   8,   0,  17,   0,  27,   0,   2,  13   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_64:       gems_fm $08, $00, 6, 2, 3, 1, 3                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,  21,   3,  31,   0,   5,   0,   2,   5   ; +$0
                gems_op   0,   0,  36,   0,  31,   0,   9,   0,   5,   5   ; +$4
                gems_op   0,   3,  15,   3,  31,   0,  11,   0,   8,   5   ; +$8
                gems_op   0,   1,  12,   2,  31,   0,   7,   0,   0,   6   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_65:       gems_fm $0C, $00, 5, 6, 3, 0, 5                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   1,  15,   2,  31,   1,   8,  31,  15,  15   ; +$0
                gems_op   2,   1,  20,   3,  31,   1,   5,   5,  15,  15   ; +$4
                gems_op   7,   2,  20,   1,  31,   1,   8,   0,  15,  15   ; +$8
                gems_op   5,  15,  22,   3,  31,   0,  15,  21,  15,  15   ; +$C
                gems_ch3 $313B, $2B78, $084F, $3300
                gems_keyon $F, 0
PATCH_66:       gems_fm $0F, $00, 7, 5, 3, 1, 2                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   1,  23,   2,  20,   0,  15,   4,   0,  10   ; +$0
                gems_op   0,   3,  23,   0,  22,   0,   0,   0,   2,  10   ; +$4
                gems_op   1,   2,  22,   3,  22,   0,   0,   0,   0,  10   ; +$8
                gems_op   6,   1,  21,   0,  22,   1,   0,   0,   0,  10   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_67:       gems_fm $09, $00, 7, 2, 3, 1, 1                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   1,  28,   0,  15,   0,   4,   0,   1,   7   ; +$0
                gems_op   7,   2,  52,   0,  12,   0,   9,   3,   0,   7   ; +$4
                gems_op   3,   7,  28,   0,  12,   0,  16,   0,   0,   7   ; +$8
                gems_op   0,   2,  12,   2,  12,   0,  10,   0,   1,   7   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_68:       gems_fm $0C, $00, 5, 2, 3, 0, 1                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   0,  28,   2,  12,   0,   5,   0,   0,  10   ; +$0
                gems_op   1,   1,  40,   3,  13,   0,   9,  18,   6,  10   ; +$4
                gems_op   3,   1,  35,   3,  12,   0,  10,   0,  15,  15   ; +$8
                gems_op   0,   0,   3,   2,  14,   0,   8,  12,   5,  10   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_69:       gems_fm $0A, $00, 7, 2, 3, 2, 3                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   1,  30,   0,  15,   0,   4,   0,   1,   7   ; +$0
                gems_op   7,   2,  55,   0,  15,   0,   9,   3,   0,   7   ; +$4
                gems_op   3,   7,  31,   0,  15,   0,  16,   0,   0,   7   ; +$8
                gems_op   0,   2,  13,   2,  15,   0,  10,   0,   1,   7   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_6A:       gems_fm $0B, $00, 3, 2, 3, 0, 4                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   0,  11,   2,  31,   0,  23,  17,   5,  15   ; +$0
                gems_op   0,   0,  22,   1,  21,   1,  17,   5,   4,  15   ; +$4
                gems_op   7,   0,  19,   1,  24,   0,  19,   6,  10,  15   ; +$8
                gems_op   0,   1,   0,   0,  25,   0,  21,   6,   2,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_6B:       gems_fm $0F, $00, 7, 5, 3, 1, 2                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   1,  23,   2,  16,   0,  16,   4,   0,   4   ; +$0
                gems_op   0,   0,  23,   0,  16,   0,   0,   0,   2,   8   ; +$4
                gems_op   1,   2,   9,   3,  18,   0,   0,   0,   0,   5   ; +$8
                gems_op   6,   0,  15,   0,  14,   1,   0,   0,   0,   7   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_6C:       gems_fm $03, $00, 5, 2, 3, 2, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   0,  25,   1,  31,   0,   1,   2,   8,   1   ; +$0
                gems_op   0,   3,  35,   1,  31,   0,   5,   2,   5,   1   ; +$4
                gems_op   7,  12,  31,   2,  31,   0,  11,   2,   3,   1   ; +$8
                gems_op   3,   2,  16,   2,  20,   0,   1,   2,   6,   7   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_6D:       gems_fm $00, $40, 6, 5, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   7,  15,  10,   1,  16,   0,   8,  18,  10,  15   ; +$0
                gems_op   3,  15,   0,   3,  17,   1,  20,  16,  10,  11   ; +$4
                gems_op   3,   6,   0,   0,  20,   0,  11,  18,   6,  15   ; +$8
                gems_op   3,  14,  15,   3,  10,   0,  31,  24,   4,  12   ; +$C
                gems_ch3 $0754, $1119, $0273, $3FBB
                gems_keyon $F, 0
PATCH_6E:       gems_fm $00, $40, 6, 4, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,  14,   7,   1,  12,   0,   8,   2,  10,  15   ; +$0
                gems_op   3,   9,   2,   3,  12,   1,  19,   2,  11,  15   ; +$4
                gems_op   3,  11,   0,   0,  31,   0,   9,  14,   7,  15   ; +$8
                gems_op   3,   7,   0,   0,  17,   0,  31,  18,   4,  15   ; +$C
                gems_ch3 $0754, $1119, $0273, $3FBB
                gems_keyon $F, 0
PATCH_6F:       gems_fm $08, $00, 6, 4, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   7,   3,   7,   0,  17,   1,   4,   5,   4,  15   ; +$0
                gems_op   7,   0,   9,   3,  16,   1,  10,  14,  10,  15   ; +$4
                gems_op   0,   2,   5,   0,  16,   1,  12,   9,  11,  15   ; +$8
                gems_op   7,   7,  35,   0,  16,   1,   9,  14,   3,  15   ; +$C
                gems_ch3 $0754, $1119, $0271, $3FBB
                gems_keyon $F, 0
PATCH_70:       gems_psg_noise $4, $FF, $2, $2, $0, $FF
PATCH_71:       gems_fm $0B, $00, 7, 2, 3, 0, 5                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,  15,   7,   0,  31,   0,  24,  31,   5,  15   ; +$0
                gems_op   0,   1,  18,   1,  19,   0,  17,  31,  11,  15   ; +$4
                gems_op   3,   0,  27,   1,  24,   0,  19,  31,  10,  15   ; +$8
                gems_op   0,   1,   8,   1,  31,   0,  14,  31,   2,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_72:       gems_fm $0F, $00, 0, 2, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   1,   0,   0,  19,   0,  31,  15,   9,  15   ; +$0
                gems_op   7,   0,   0,   0,  24,   0,  18,   0,  15,  15   ; +$4
                gems_op   7,   0,   9,   1,  17,   0,  31,   2,  11,  15   ; +$8
                gems_op   7,   0,  14,   0,  18,   0,   0,   0,   0,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_73:       gems_fm $00, $40, 4, 5, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,  11,   3,   1,  11,   0,  12,   2,   9,  14   ; +$0
                gems_op   0,  15,  15,   2,  12,   0,   7,   2,   9,  14   ; +$4
                gems_op   7,  12,  26,   2,  11,   0,  11,  18,  11,  14   ; +$8
                gems_op   3,   7,  15,   2,  22,   0,  10,   0,   8,  14   ; +$C
                gems_ch3 $0754, $1119, $0271, $20BB
                gems_keyon $F, 0
PATCH_74:       gems_fm $0F, $00, 5, 7, 3, 3, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   6,  11,   0,   0,  31,   1,   1,  27,   8,  15   ; +$0
                gems_op   2,  15,   0,   3,  31,   1,  15,  31,  15,  15   ; +$4
                gems_op   7,  15,   5,   1,  31,   0,   3,  29,   0,  15   ; +$8
                gems_op   7,   1,   0,   0,  31,   0,   0,  13,   0,  15   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $1, 0
PATCH_75:       gems_psg_tone $FF, $1, $1, $F, $F
PATCH_76:       gems_fm $00, $40, 6, 4, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   3,   1,   8,   1,  31,   0,   8,   2,  10,  15   ; +$0
                gems_op   3,   0,  20,   3,  12,   1,  19,   2,  11,  15   ; +$4
                gems_op   3,   8,   0,   0,  31,   0,   9,  14,   7,  15   ; +$8
                gems_op   3,   0,  26,   0,  17,   0,  31,  18,  15,  15   ; +$C
                gems_ch3 $0754, $1119, $0273, $3FBB
                gems_keyon $F, 0
PATCH_77:       gems_psg_noise $7, $F, $0, $0, $A, $A
PATCH_78:       gems_fm $00, $40, 2, 0, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   2,   0,   0,  12,   0,   0,   8,   0,   1   ; +$0
                gems_op   0,   0,   0,   0,  26,   0,  15,   4,   0,   2   ; +$4
                gems_op   0,   0,   5,   0,  12,   0,   0,  10,   0,   1   ; +$8
                gems_op   0,   0,   0,   0,  16,   0,   2,  14,   1,   2   ; +$C
                gems_ch3 $02EE, $01F4, $000A, $0064
                gems_keyon $F, 0
PATCH_79:       gems_fm $0F, $00, 0, 4, 3, 1, 1                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   1,   3,   2,  29,   0,  31,  15,   0,  15   ; +$0
                gems_op   0,   2,   0,   0,  15,   1,  25,  11,   0,  15   ; +$4
                gems_op   0,   0,   3,   0,  15,   0,  31,   5,   0,  15   ; +$8
                gems_op   0,   4,   0,   0,  15,   0,  20,  19,   0,  15   ; +$C
                gems_ch3 $0000, $0000, $0000, $0000
                gems_keyon $F, 0
PATCH_7A:       gems_fm $0B, $00, 2, 2, 3, 0, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   5,   1,  35,   3,  24,   0,   5,   0,   2,  10   ; +$0
                gems_op   1,   3,  59,   3,  29,   0,   6,   0,   5,  10   ; +$4
                gems_op   0,  10,  22,   3,  29,   0,   8,   0,   2,  10   ; +$8
                gems_op   0,   1,   0,   2,  31,   1,   8,   6,   2,  10   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_7B:       gems_fm $0A, $00, 6, 4, 3, 1, 4                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   5,  18,   2,  26,   1,   2,  11,   0,   9   ; +$0
                gems_op   2,   4,  32,   2,  25,   1,   7,  19,  11,   9   ; +$4
                gems_op   0,   1,   5,   1,  22,   0,   0,   0,   1,   8   ; +$8
                gems_op   0,   8,   0,   1,  31,   0,  25,  20,   9,   9   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
PATCH_7C:       gems_fm $07, $00, 5, 2, 3, 2, 0                             ; lfo, ch3, fb, alg, pan, ams, fms
                ;        dt mul  tl  rs  ar  am d1r d2r d1l  rr
                gems_op   0,   1,  29,   1,  31,   0,  10,   2,   8,   5   ; +$0
                gems_op   0,   1,  35,   1,  31,   0,   5,   2,   5,   5   ; +$4
                gems_op   7,   8,  27,   2,  31,   0,  11,   2,   3,   5   ; +$8
                gems_op   3,   1,  16,   2,  31,   0,   8,   2,  10,   5   ; +$C
                gems_ch3 $1FFF, $1FFF, $1FFF, $1FFF
                gems_keyon $F, 0
ENVELOPE_TBL_Z80:                       ; DATA XREF: sub_247576+C   o
                                        ; огибающие высоты тона: смещения (LE) огибающих
                gems_env_ofs ENV_00
                gems_env_ofs ENV_01
                gems_env_ofs ENV_02
                gems_env_ofs ENV_03
ENV_00:         gems_env_start -40
                gems_env_seg 1, 55
                gems_env_end
ENV_01:         gems_env_start 0
                gems_env_seg 2, 475
                gems_env_seg 24, -600
                gems_env_seg 100, 0
                gems_env_end
ENV_02:         gems_env_start 0
                gems_env_seg 192, 24
                gems_env_seg 192, 24
                gems_env_seg 192, 24
                gems_env_seg 192, 24
                gems_env_end
ENV_03:         gems_env_start 0
                gems_env_seg 15, -72
                gems_env_seg 24, 43
                gems_env_end
SEQUENCE_TBL_Z80:                       ; DATA XREF: sub_247576+6   o
                                        ; sequence table: смещения (LE) заголовков секвенций
                gems_seq_ofs SEQH_PETER_PUPPY               ;   0 $00
                gems_seq_ofs SEQH_BUNGEE123                 ;   1 $01
                gems_seq_ofs SEQH_BTVILLES                  ;   2 $02
                gems_seq_ofs SEQH_DOWN_TUBES                ;   3 $03
                gems_seq_ofs SEQH_INTESTINAL                ;   4 $04
                gems_seq_ofs SEQH_NJ_CITY                   ;   5 $05
                gems_seq_ofs SEQH_ANDYASTR                  ;   6 $06
                gems_seq_ofs SEQH_ANDYASTR_2                ;   7 $07
                gems_seq_ofs SEQH_ANDYASTR_8                ;   8 $08
                gems_seq_ofs SEQH_WHECK                     ;   9 $09
                gems_seq_ofs SEQH_WHECK_9                   ;  10 $0A
                gems_seq_ofs SEQH_WHECK_10                  ;  11 $0B
                gems_seq_ofs SEQH_WHECK_16                  ;  12 $0C
                gems_seq_ofs SEQH_DARKNESS                  ;  13 $0D
                gems_seq_ofs SEQH_ANDY_WIN                  ;  14 $0E
                gems_seq_ofs SEQH_END_1                     ;  15 $0F
                gems_seq_ofs SEQH_END_6                     ;  16 $10
                gems_seq_ofs SEQH_GAME_OVER                 ;  17 $11
                gems_seq_ofs SEQH_BTVILLEH                  ;  18 $12
                gems_seq_ofs SEQH_EMPTY                     ;  19 $13
                gems_seq_ofs SEQH_PSYCROW                   ;  20 $14
                gems_seq_ofs SEQH_THORNS                    ;  21 $15
                gems_seq_ofs SEQH_CROW                      ;  22 $16 карканье вороны
                gems_seq_ofs SEQH_WHIP                      ;  23 $17 перевернутый указатель на звук кнута (209)
                gems_seq_ofs SEQH_PIM                       ;  24 $18
                gems_seq_ofs SEQH_COW                       ;  25 $19
                gems_seq_ofs SEQH_DOG                       ;  26 $1A
                gems_seq_ofs SEQH_PETE_LIFT                 ;  27 $1B
                gems_seq_ofs SEQH_JIM_HIT                   ;  28 $1C
                gems_seq_ofs SEQH_HAMSTER                   ;  29 $1D
                gems_seq_ofs SEQH_GLASS                     ;  30 $1E
                gems_seq_ofs SEQH_PETE_WOOF                 ;  31 $1F
                gems_seq_ofs SEQH_UFO                       ;  32 $20
                gems_seq_ofs SEQH_CAT_MEOW                  ;  33 $21
                gems_seq_ofs SEQH_SNOT                      ;  34 $22
                gems_seq_ofs SEQH_RUMBLE                    ;  35 $23
                gems_seq_ofs SEQH_MONKEY                    ;  36 $24
                gems_seq_ofs SEQH_CHEATER                   ;  37 $25 Cheater sheiger щейгер
                gems_seq_ofs SEQH_LIVEUP                    ;  38 $26
                gems_seq_ofs SEQH_HEADGUN                   ;  39 $27
                gems_seq_ofs SEQH_EJIM_TITLE                ;  40 $28
                gems_seq_ofs SEQH_REFREGER                  ;  41 $29
                gems_seq_ofs SEQH_RUMBLE_2                  ;  42 $2A
                gems_seq_ofs SEQH_SPRING                    ;  43 $2B
                gems_seq_ofs SEQH_ROCKET                    ;  44 $2C
                gems_seq_ofs SEQH_TICK                      ;  45 $2D
                gems_seq_ofs SEQH_DOOR                      ;  46 $2E
                gems_seq_ofs SEQH_DOOR_CREAK                ;  47 $2F
                gems_seq_ofs SEQH_BURST                     ;  48 $30
                gems_seq_ofs SEQH_TIRE_JUMP                 ;  49 $31
                gems_seq_ofs SEQH_LEVER                     ;  50 $32
                gems_seq_ofs SEQH_HEART                     ;  51 $33
                gems_seq_ofs SEQH_MONSTER                   ;  52 $34
                gems_seq_ofs SEQH_DOG_2                     ;  53 $35
                gems_seq_ofs SEQH_CHUCK                     ;  54 $36
                gems_seq_ofs SEQH_CHUCK_2                   ;  55 $37
                gems_seq_ofs SEQH_SNOT_2                    ;  56 $38
                gems_seq_ofs SEQH_UFO_2                     ;  57 $39
                gems_seq_ofs SEQH_CHUCK_3                   ;  58 $3A
                gems_seq_ofs SEQH_JIM_GROUND                ;  59 $3B
                gems_seq_ofs SEQH_BONUS                     ;  60 $3C
                gems_seq_ofs SEQH_SCREAM                    ;  61 $3D
                gems_seq_ofs SEQH_DOG_3                     ;  62 $3E
                gems_seq_ofs SEQH_RICOCHET                  ;  63 $3F
                gems_seq_ofs SEQH_DOG_4                     ;  64 $40
                gems_seq_ofs SEQH_ROCKET_2                  ;  65 $41
                gems_seq_ofs SEQH_QUEEN_1                   ;  66 $42
                gems_seq_ofs SEQH_QUEEN_2                   ;  67 $43
                gems_seq_ofs SEQH_TUBE_OUT                  ;  68 $44
                gems_seq_ofs SEQH_PSYQ_FIRE                 ;  69 $45
                gems_seq_ofs SEQH_JIM_FIRE                  ;  70 $46
                gems_seq_ofs SEQH_HELI_PART                 ;  71 $47
                gems_seq_ofs SEQH_PLASMA_FIRE               ;  72 $48
                gems_seq_ofs SEQH_HP_UP                     ;  73 $49
                gems_seq_ofs SEQH_DESTROY                   ;  74 $4A
                gems_seq_ofs SEQH_FIRE                      ;  75 $4B
                gems_seq_ofs SEQH_FIRE_2                    ;  76 $4C
                gems_seq_ofs SEQH_FIRE_3                    ;  77 $4D
                gems_seq_ofs SEQH_SCREAM_2                  ;  78 $4E
                gems_seq_ofs SEQH_CHICKEN                   ;  79 $4F
                gems_seq_ofs SEQH_CHICKEN_2                 ;  80 $50
                gems_seq_ofs SEQH_CH_TELEPRT                ;  81 $51
                gems_seq_ofs SEQH_TELEPORT                  ;  82 $52
                gems_seq_ofs SEQH_EFFECT                    ;  83 $53
                gems_seq_ofs SEQH_WTR_PLOP                  ;  84 $54
                gems_seq_ofs SEQH_WTR_PLOP_2                ;  85 $55
                gems_seq_ofs SEQH_WTR_PLOP_3                ;  86 $56
                gems_seq_ofs SEQH_WTR_PLOP_4                ;  87 $57
                gems_seq_ofs SEQH_GROOVY                    ;  88 $58
                gems_seq_ofs SEQH_JIM_MUSCLE                ;  89 $59
                gems_seq_ofs SEQH_JIM_HEY                   ;  90 $5A
                gems_seq_ofs SEQH_PRINCESS                  ;  91 $5B
                gems_seq_ofs SEQH_SCREAM_3                  ;  92 $5C
                gems_seq_ofs SEQH_JIM_SWEARS                ;  93 $5D
                gems_seq_ofs SEQH_SCREAM_4                  ;  94 $5E
                gems_seq_ofs SEQH_JIM_HIT_2                 ;  95 $5F
                gems_seq_ofs SEQH_SCREAM_5                  ;  96 $60
                gems_seq_ofs SEQH_JIM_SPEED                 ;  97 $61
                gems_seq_ofs SEQH_JIM_YEHOO                 ;  98 $62
                gems_seq_ofs SEQH_JIM_WUUH                  ;  99 $63
                gems_seq_ofs SEQH_JIM_AMMO                  ; 100 $64
                gems_seq_ofs SEQH_SCREAM_6                  ; 101 $65
                gems_seq_ofs SEQH_JIM_LALALA                ; 102 $66
                gems_seq_ofs SEQH_HOUL                      ; 103 $67
                gems_seq_ofs SEQH_COW_2                     ; 104 $68
                gems_seq_ofs SEQH_HOUL_2                    ; 105 $69
                gems_seq_ofs SEQH_JIM_HOUYEAH               ; 106 $6A
                gems_seq_ofs SEQH_JIM_OUCH                  ; 107 $6B
                gems_seq_ofs SEQH_JIM_AYAU                  ; 108 $6C
                gems_seq_ofs SEQH_JIM_DAU                   ; 109 $6D
                gems_seq_ofs SEQH_JIM_PLASMA                ; 110 $6E
                gems_seq_ofs SEQH_JIM_AAAH                  ; 111 $6F
                gems_seq_ofs SEQH_SCRATCH                   ; 112 $70
                gems_seq_ofs SEQH_SCRATCH_2                 ; 113 $71
                gems_seq_ofs SEQH_PRISONER                  ; 114 $72
                gems_seq_ofs SEQH_SCREAM_7                  ; 115 $73
                gems_seq_ofs SEQH_DEMON                     ; 116 $74
                gems_seq_ofs SEQH_DEMON_2                   ; 117 $75
                gems_seq_ofs SEQH_EFFECT_2                  ; 118 $76
                gems_seq_ofs SEQH_EFFECT_3                  ; 119 $77
                gems_seq_ofs SEQH_PSYQ_HIT                  ; 120 $78
                gems_seq_ofs SEQH_PSYQ_HIT_2                ; 121 $79
                gems_seq_ofs SEQH_PSYQ_HIT_3                ; 122 $7A
                gems_seq_ofs SEQH_PSYQ_HIT_4                ; 123 $7B
                gems_seq_ofs SEQH_PSYQ_HIT_5                ; 124 $7C
; заголовки секвенций: число каналов, затем смещения (LE) данных каналов
SEQH_PETER_PUPPY:dc.b 12                                ; seq 0
                gems_seq_ofs SEQ_PETER_PUPPY
                gems_seq_ofs SEQ_PETER_PUPPY_2
                gems_seq_ofs SEQ_PETER_PUPPY_3
                gems_seq_ofs SEQ_PETER_PUPPY_4
                gems_seq_ofs SEQ_PETER_PUPPY_5
                gems_seq_ofs SEQ_PETER_PUPPY_6
                gems_seq_ofs SEQ_PETER_PUPPY_7
                gems_seq_ofs SEQ_PETER_PUPPY_8
                gems_seq_ofs SEQ_PETER_PUPPY_9
                gems_seq_ofs SEQ_PETER_PUPPY_10
                gems_seq_ofs SEQ_PETER_PUPPY_11
                gems_seq_ofs SEQ_PETER_PUPPY_12
SEQH_BUNGEE123: dc.b 10                                 ; seq 1
                gems_seq_ofs SEQ_BUNGEE123
                gems_seq_ofs SEQ_BUNGEE123_2
                gems_seq_ofs SEQ_BUNGEE123_3
                gems_seq_ofs SEQ_BUNGEE123_4
                gems_seq_ofs SEQ_BUNGEE123_5
                gems_seq_ofs SEQ_BUNGEE123_6
                gems_seq_ofs SEQ_BUNGEE123_7
                gems_seq_ofs SEQ_BUNGEE123_8
                gems_seq_ofs SEQ_BUNGEE123_9
                gems_seq_ofs SEQ_BUNGEE123_10
SEQH_BTVILLES:  dc.b 12                                 ; seq 2
                gems_seq_ofs SEQ_BTVILLES
                gems_seq_ofs SEQ_BTVILLES_2
                gems_seq_ofs SEQ_BTVILLES_3
                gems_seq_ofs SEQ_BTVILLES_4
                gems_seq_ofs SEQ_BTVILLES_5
                gems_seq_ofs SEQ_BTVILLES_6
                gems_seq_ofs SEQ_BTVILLES_7
                gems_seq_ofs SEQ_BTVILLES_8
                gems_seq_ofs SEQ_BTVILLES_9
                gems_seq_ofs SEQ_BTVILLES_10
                gems_seq_ofs SEQ_BTVILLES_11
                gems_seq_ofs SEQ_BTVILLES_12
SEQH_DOWN_TUBES:dc.b 12                                 ; seq 3
                gems_seq_ofs SEQ_DOWN_TUBES
                gems_seq_ofs SEQ_DOWN_TUBES_2
                gems_seq_ofs SEQ_DOWN_TUBES_3
                gems_seq_ofs SEQ_DOWN_TUBES_4
                gems_seq_ofs SEQ_DOWN_TUBES_5
                gems_seq_ofs SEQ_DOWN_TUBES_6
                gems_seq_ofs SEQ_DOWN_TUBES_7
                gems_seq_ofs SEQ_DOWN_TUBES_8
                gems_seq_ofs SEQ_DOWN_TUBES_9
                gems_seq_ofs SEQ_DOWN_TUBES_10
                gems_seq_ofs SEQ_DOWN_TUBES_11
                gems_seq_ofs SEQ_DOWN_TUBES_12
SEQH_INTESTINAL:dc.b 5                                  ; seq 4
                gems_seq_ofs SEQ_INTESTINAL
                gems_seq_ofs SEQ_INTESTINAL_2
                gems_seq_ofs SEQ_INTESTINAL_3
                gems_seq_ofs SEQ_INTESTINAL_4
                gems_seq_ofs SEQ_INTESTINAL_5
SEQH_NJ_CITY:   dc.b 13                                 ; seq 5
                gems_seq_ofs SEQ_NJ_CITY
                gems_seq_ofs SEQ_NJ_CITY_2
                gems_seq_ofs SEQ_NJ_CITY_3
                gems_seq_ofs SEQ_NJ_CITY_4
                gems_seq_ofs SEQ_NJ_CITY_5
                gems_seq_ofs SEQ_NJ_CITY_6
                gems_seq_ofs SEQ_NJ_CITY_7
                gems_seq_ofs SEQ_NJ_CITY_8
                gems_seq_ofs SEQ_NJ_CITY_9
                gems_seq_ofs SEQ_NJ_CITY_10
                gems_seq_ofs SEQ_NJ_CITY_11
                gems_seq_ofs SEQ_NJ_CITY_12
                gems_seq_ofs SEQ_NJ_CITY_13
SEQH_ANDYASTR:  dc.b 2                                  ; seq 6
                gems_seq_ofs SEQ_ANDYASTR
                gems_seq_ofs SEQ_ANDYASTR_1
SEQH_ANDYASTR_2:dc.b 6                                  ; seq 7
                gems_seq_ofs SEQ_ANDYASTR_2
                gems_seq_ofs SEQ_ANDYASTR_3
                gems_seq_ofs SEQ_ANDYASTR_4
                gems_seq_ofs SEQ_ANDYASTR_5
                gems_seq_ofs SEQ_ANDYASTR_6
                gems_seq_ofs SEQ_ANDYASTR_7
SEQH_ANDYASTR_8:dc.b 5                                  ; seq 8
                gems_seq_ofs SEQ_ANDYASTR_8
                gems_seq_ofs SEQ_ANDYASTR_9
                gems_seq_ofs SEQ_ANDYASTR_10
                gems_seq_ofs SEQ_ANDYASTR_11
                gems_seq_ofs SEQ_ANDYASTR_12
SEQH_WHECK:     dc.b 8                                  ; seq 9
                gems_seq_ofs SEQ_WHECK
                gems_seq_ofs SEQ_WHECK_2
                gems_seq_ofs SEQ_WHECK_3
                gems_seq_ofs SEQ_WHECK_4
                gems_seq_ofs SEQ_WHECK_5
                gems_seq_ofs SEQ_WHECK_6
                gems_seq_ofs SEQ_WHECK_7
                gems_seq_ofs SEQ_WHECK_8
SEQH_WHECK_9:   dc.b 1                                  ; seq 10
                gems_seq_ofs SEQ_WHECK_9
SEQH_WHECK_10:  dc.b 6                                  ; seq 11
                gems_seq_ofs SEQ_WHECK_10
                gems_seq_ofs SEQ_WHECK_11
                gems_seq_ofs SEQ_WHECK_12
                gems_seq_ofs SEQ_WHECK_13
                gems_seq_ofs SEQ_WHECK_14
                gems_seq_ofs SEQ_WHECK_15
SEQH_WHECK_16:  dc.b 1                                  ; seq 12
                gems_seq_ofs SEQ_WHECK_16
SEQH_DARKNESS:  dc.b 3                                  ; seq 13
                gems_seq_ofs SEQ_DARKNESS
                gems_seq_ofs SEQ_DARKNESS_2
                gems_seq_ofs SEQ_DARKNESS_3
SEQH_ANDY_WIN:  dc.b 5                                  ; seq 14
                gems_seq_ofs SEQ_ANDY_WIN
                gems_seq_ofs SEQ_ANDY_WIN_1
                gems_seq_ofs SEQ_ANDY_WIN_2
                gems_seq_ofs SEQ_ANDY_WIN_3
                gems_seq_ofs SEQ_ANDY_WIN_4
SEQH_END_1:     dc.b 5                                  ; seq 15
                gems_seq_ofs SEQ_END_1
                gems_seq_ofs SEQ_END_2
                gems_seq_ofs SEQ_END_3
                gems_seq_ofs SEQ_END_4
                gems_seq_ofs SEQ_END_5
SEQH_END_6:     dc.b 5                                  ; seq 16
                gems_seq_ofs SEQ_END_6
                gems_seq_ofs SEQ_END_7
                gems_seq_ofs SEQ_END_8
                gems_seq_ofs SEQ_END_9
                gems_seq_ofs SEQ_END_10
SEQH_GAME_OVER: dc.b 1                                  ; seq 17
                gems_seq_ofs SEQ_GAME_OVER
SEQH_BTVILLEH:  dc.b 5                                  ; seq 18
                gems_seq_ofs SEQ_BTVILLEH
                gems_seq_ofs SEQ_BTVILLEH_2
                gems_seq_ofs SEQ_BTVILLEH_3
                gems_seq_ofs SEQ_BTVILLEH_4
                gems_seq_ofs SEQ_BTVILLEH_5
SEQH_EMPTY:     dc.b 0                                  ; seq 19
SEQH_PSYCROW:   dc.b 5                                  ; seq 20
                gems_seq_ofs SEQ_PSYCROW
                gems_seq_ofs SEQ_PSYCROW_2
                gems_seq_ofs SEQ_PSYCROW_3
                gems_seq_ofs SEQ_PSYCROW_4
                gems_seq_ofs SEQ_PSYCROW_5
SEQH_THORNS:    dc.b 1                                  ; seq 21
                gems_seq_ofs SEQ_THORNS
SEQH_CROW:      dc.b 1                                  ; seq 22 vorona
                gems_seq_ofs SEQ_CROW
SEQH_WHIP:      dc.b 1                                  ; seq 23
                gems_seq_ofs SEQ_WHIP
SEQH_PIM:       dc.b 1                                  ; seq 24
                gems_seq_ofs SEQ_PIM
SEQH_COW:       dc.b 1                                  ; seq 25
                gems_seq_ofs SEQ_COW
SEQH_DOG:       dc.b 1                                  ; seq 26
                gems_seq_ofs SEQ_DOG
SEQH_PETE_LIFT: dc.b 1                                  ; seq 27
                gems_seq_ofs SEQ_PETE_LIFT
SEQH_JIM_HIT:   dc.b 1                                  ; seq 28
                gems_seq_ofs SEQ_JIM_HIT
SEQH_HAMSTER:   dc.b 1                                  ; seq 29
                gems_seq_ofs SEQ_HAMSTER
SEQH_GLASS:     dc.b 1                                  ; seq 30
                gems_seq_ofs SEQ_GLASS
SEQH_PETE_WOOF: dc.b 1                                  ; seq 31
                gems_seq_ofs SEQ_PETE_WOOF
SEQH_UFO:       dc.b 1                                  ; seq 32
                gems_seq_ofs SEQ_UFO
SEQH_CAT_MEOW:  dc.b 1                                  ; seq 33
                gems_seq_ofs SEQ_CAT_MEOW
SEQH_SNOT:      dc.b 1                                  ; seq 34
                gems_seq_ofs SEQ_SNOT
SEQH_RUMBLE:    dc.b 1                                  ; seq 35
                gems_seq_ofs SEQ_RUMBLE
SEQH_MONKEY:    dc.b 1                                  ; seq 36
                gems_seq_ofs SEQ_MONKEY
SEQH_CHEATER:   dc.b 1                                  ; seq 37
                gems_seq_ofs SEQ_CHEATER
SEQH_LIVEUP:    dc.b 1                                  ; seq 38
                gems_seq_ofs SEQ_LIVEUP
SEQH_HEADGUN:   dc.b 1                                  ; seq 39
                gems_seq_ofs SEQ_HEADGUN
SEQH_EJIM_TITLE:dc.b 1                                  ; seq 40
                gems_seq_ofs SEQ_EJIM_TITLE
SEQH_REFREGER:  dc.b 1                                  ; seq 41
                gems_seq_ofs SEQ_REFREGER
SEQH_RUMBLE_2:  dc.b 1                                  ; seq 42
                gems_seq_ofs SEQ_RUMBLE_2
SEQH_SPRING:    dc.b 1                                  ; seq 43
                gems_seq_ofs SEQ_SPRING
SEQH_ROCKET:    dc.b 1                                  ; seq 44
                gems_seq_ofs SEQ_ROCKET
SEQH_TICK:      dc.b 1                                  ; seq 45
                gems_seq_ofs SEQ_TICK
SEQH_DOOR:      dc.b 1                                  ; seq 46
                gems_seq_ofs SEQ_DOOR
SEQH_DOOR_CREAK:dc.b 1                                  ; seq 47
                gems_seq_ofs SEQ_DOOR_CREAK
SEQH_BURST:     dc.b 1                                  ; seq 48
                gems_seq_ofs SEQ_BURST
SEQH_TIRE_JUMP: dc.b 1                                  ; seq 49
                gems_seq_ofs SEQ_TIRE_JUMP
SEQH_LEVER:     dc.b 1                                  ; seq 50
                gems_seq_ofs SEQ_LEVER
SEQH_HEART:     dc.b 1                                  ; seq 51
                gems_seq_ofs SEQ_HEART
SEQH_MONSTER:   dc.b 1                                  ; seq 52
                gems_seq_ofs SEQ_MONSTER
SEQH_DOG_2:     dc.b 1                                  ; seq 53
                gems_seq_ofs SEQ_DOG_2
SEQH_CHUCK:     dc.b 1                                  ; seq 54
                gems_seq_ofs SEQ_CHUCK
SEQH_CHUCK_2:   dc.b 1                                  ; seq 55
                gems_seq_ofs SEQ_CHUCK_2
SEQH_SNOT_2:    dc.b 1                                  ; seq 56
                gems_seq_ofs SEQ_SNOT_2
SEQH_UFO_2:     dc.b 1                                  ; seq 57
                gems_seq_ofs SEQ_UFO_2
SEQH_CHUCK_3:   dc.b 1                                  ; seq 58
                gems_seq_ofs SEQ_CHUCK_3
SEQH_JIM_GROUND:dc.b 1                                  ; seq 59
                gems_seq_ofs SEQ_JIM_GROUND
SEQH_BONUS:     dc.b 1                                  ; seq 60
                gems_seq_ofs SEQ_BONUS
SEQH_SCREAM:    dc.b 1                                  ; seq 61
                gems_seq_ofs SEQ_SCREAM
SEQH_DOG_3:     dc.b 1                                  ; seq 62
                gems_seq_ofs SEQ_DOG_3
SEQH_RICOCHET:  dc.b 1                                  ; seq 63
                gems_seq_ofs SEQ_RICOCHET
SEQH_DOG_4:     dc.b 1                                  ; seq 64
                gems_seq_ofs SEQ_DOG_4
SEQH_ROCKET_2:  dc.b 2                                  ; seq 65
                gems_seq_ofs SEQ_ROCKET_2
                gems_seq_ofs SEQ_ROCKET_3
SEQH_QUEEN_1:   dc.b 1                                  ; seq 66
                gems_seq_ofs SEQ_QUEEN_1
SEQH_QUEEN_2:   dc.b 1                                  ; seq 67
                gems_seq_ofs SEQ_QUEEN_2
SEQH_TUBE_OUT:  dc.b 1                                  ; seq 68
                gems_seq_ofs SEQ_TUBE_OUT
SEQH_PSYQ_FIRE: dc.b 3                                  ; seq 69
                gems_seq_ofs SEQ_PSYQ_FIRE
                gems_seq_ofs SEQ_EFFECT_4
                gems_seq_ofs SEQ_EFFECT_5
SEQH_JIM_FIRE:  dc.b 1                                  ; seq 70
                gems_seq_ofs SEQ_JIM_FIRE
SEQH_HELI_PART: dc.b 1                                  ; seq 71
                gems_seq_ofs SEQ_HELI_PART
SEQH_PLASMA_FIRE:dc.b 2                                 ; seq 72
                gems_seq_ofs SEQ_PLASMA_FIRE
                gems_seq_ofs SEQ_PLASMA_END
SEQH_HP_UP:     dc.b 1                                  ; seq 73
                gems_seq_ofs SEQ_HP_UP
SEQH_DESTROY:   dc.b 1                                  ; seq 74
                gems_seq_ofs SEQ_DESTROY
SEQH_FIRE:      dc.b 1                                  ; seq 75
                gems_seq_ofs SEQ_FIRE
SEQH_FIRE_2:    dc.b 1                                  ; seq 76
                gems_seq_ofs SEQ_FIRE_2
SEQH_FIRE_3:    dc.b 1                                  ; seq 77
                gems_seq_ofs SEQ_FIRE_3
SEQH_SCREAM_2:  dc.b 1                                  ; seq 78
                gems_seq_ofs SEQ_SCREAM_2
SEQH_CHICKEN:   dc.b 1                                  ; seq 79
                gems_seq_ofs SEQ_CHICKEN
SEQH_CHICKEN_2: dc.b 1                                  ; seq 80
                gems_seq_ofs SEQ_CHICKEN_2
SEQH_CH_TELEPRT:dc.b 1                                  ; seq 81
                gems_seq_ofs SEQ_CH_TELEPRT
SEQH_TELEPORT:  dc.b 1                                  ; seq 82
                gems_seq_ofs SEQ_TELEPORT
SEQH_EFFECT:    dc.b 1                                  ; seq 83
                gems_seq_ofs SEQ_EFFECT
SEQH_WTR_PLOP:  dc.b 1                                  ; seq 84
                gems_seq_ofs SEQ_WTR_PLOP
SEQH_WTR_PLOP_2:dc.b 1                                  ; seq 85
                gems_seq_ofs SEQ_WTR_PLOP_2
SEQH_WTR_PLOP_3:dc.b 1                                  ; seq 86
                gems_seq_ofs SEQ_WTR_PLOP_3
SEQH_WTR_PLOP_4:dc.b 1                                  ; seq 87
                gems_seq_ofs SEQ_WTR_PLOP_4
SEQH_GROOVY:    dc.b 1                                  ; seq 88
                gems_seq_ofs SEQ_GROOVY
SEQH_JIM_MUSCLE:dc.b 1                                  ; seq 89
                gems_seq_ofs SEQ_JIM_MUSCLE
SEQH_JIM_HEY:   dc.b 1                                  ; seq 90
                gems_seq_ofs SEQ_JIM_HEY
SEQH_PRINCESS:  dc.b 1                                  ; seq 91
                gems_seq_ofs SEQ_PRINCESS
SEQH_SCREAM_3:  dc.b 1                                  ; seq 92
                gems_seq_ofs SEQ_SCREAM_3
SEQH_JIM_SWEARS:dc.b 1                                  ; seq 93
                gems_seq_ofs SEQ_JIM_SWEARS
SEQH_SCREAM_4:  dc.b 1                                  ; seq 94
                gems_seq_ofs SEQ_SCREAM_4
SEQH_JIM_HIT_2: dc.b 1                                  ; seq 95
                gems_seq_ofs SEQ_JIM_HIT_2
SEQH_SCREAM_5:  dc.b 1                                  ; seq 96
                gems_seq_ofs SEQ_SCREAM_5
SEQH_JIM_SPEED: dc.b 1                                  ; seq 97
                gems_seq_ofs SEQ_JIM_SPEED
SEQH_JIM_YEHOO: dc.b 1                                  ; seq 98
                gems_seq_ofs SEQ_JIM_YEHOO
SEQH_JIM_WUUH:  dc.b 1                                  ; seq 99
                gems_seq_ofs SEQ_JIM_WUUH
SEQH_JIM_AMMO:  dc.b 1                                  ; seq 100
                gems_seq_ofs SEQ_JIM_AMMO
SEQH_SCREAM_6:  dc.b 1                                  ; seq 101
                gems_seq_ofs SEQ_SCREAM_6
SEQH_JIM_LALALA:dc.b 1                                  ; seq 102
                gems_seq_ofs SEQ_JIM_LALALA
SEQH_HOUL:      dc.b 1                                  ; seq 103
                gems_seq_ofs SEQ_HOUL
SEQH_COW_2:     dc.b 1                                  ; seq 104
                gems_seq_ofs SEQ_COW_2
SEQH_HOUL_2:    dc.b 1                                  ; seq 105
                gems_seq_ofs SEQ_HOUL_2
SEQH_JIM_HOUYEAH:dc.b 1                                 ; seq 106
                gems_seq_ofs SEQ_JIM_HOUYEAH
SEQH_JIM_OUCH:  dc.b 1                                  ; seq 107
                gems_seq_ofs SEQ_JIM_OUCH
SEQH_JIM_AYAU:  dc.b 1                                  ; seq 108
                gems_seq_ofs SEQ_JIM_AYAU
SEQH_JIM_DAU:   dc.b 1                                  ; seq 109
                gems_seq_ofs SEQ_JIM_DAU
SEQH_JIM_PLASMA:dc.b 1                                  ; seq 110
                gems_seq_ofs SEQ_JIM_PLASMA
SEQH_JIM_AAAH:  dc.b 1                                  ; seq 111
                gems_seq_ofs SEQ_JIM_AAAH
SEQH_SCRATCH:   dc.b 1                                  ; seq 112
                gems_seq_ofs SEQ_SCRATCH
SEQH_SCRATCH_2: dc.b 1                                  ; seq 113
                gems_seq_ofs SEQ_SCRATCH_2
SEQH_PRISONER:  dc.b 1                                  ; seq 114
                gems_seq_ofs SEQ_PRISONER
SEQH_SCREAM_7:  dc.b 1                                  ; seq 115
                gems_seq_ofs SEQ_SCREAM_7
SEQH_DEMON:     dc.b 1                                  ; seq 116
                gems_seq_ofs SEQ_DEMON
SEQH_DEMON_2:   dc.b 1                                  ; seq 117
                gems_seq_ofs SEQ_DEMON_2
SEQH_EFFECT_2:  dc.b 1                                  ; seq 118
                gems_seq_ofs SEQ_EFFECT_2
SEQH_EFFECT_3:  dc.b 1                                  ; seq 119
                gems_seq_ofs SEQ_EFFECT_3
SEQH_PSYQ_HIT:  dc.b 1                                  ; seq 120
                gems_seq_ofs SEQ_PSYQ_HIT
SEQH_PSYQ_HIT_2:dc.b 1                                  ; seq 121
                gems_seq_ofs SEQ_PSYQ_HIT_2
SEQH_PSYQ_HIT_3:dc.b 1                                  ; seq 122
                gems_seq_ofs SEQ_PSYQ_HIT_3
SEQH_PSYQ_HIT_4:dc.b 1                                  ; seq 123
                gems_seq_ofs SEQ_PSYQ_HIT_4
SEQH_PSYQ_HIT_5:dc.b 1                                  ; seq 124
                gems_seq_ofs SEQ_PSYQ_HIT_5
    include "src/gems_seq.inc"
DIGITAL_TBL_Z80:                        ; DATA XREF: sub_247576   o
                                        ; digital sample table: 12 байт на сэмпл, номер сэмпла = (нота - $30) mod $60
SMP_DRUM_00:    gems_sample $05, SMP_DRUM_00_DAT, SMP_DRUM_00_END       ;   0 $00
SMP_DRUM_01:    gems_sample $05, SMP_DRUM_01_DAT, SMP_DRUM_01_END       ;   1 $01
SMP_DRUM_02:    gems_sample $05, SMP_DRUM_02_DAT, SMP_DRUM_02_END       ;   2 $02
SMP_DRUM_03:    gems_sample $06, SMP_DRUM_03_DAT, SMP_DRUM_03_END       ;   3 $03
SMP_DRUM_04:    gems_sample $05, SMP_DRUM_04_DAT, SMP_DRUM_04_END       ;   4 $04
SMP_DRUM_05:    gems_sample $05, SMP_DRUM_05_DAT, SMP_DRUM_05_END       ;   5 $05
SMP_DRUM_06:    gems_sample $05, SMP_DRUM_06_DAT, SMP_DRUM_06_END       ;   6 $06
SMP_DRUM_07:    gems_sample $05, SMP_DRUM_07_DAT, SMP_DRUM_07_END       ;   7 $07
SMP_DRUM_08:    gems_sample $05, SMP_DRUM_08_DAT, SMP_DRUM_08_END       ;   8 $08
SMP_HOUL:       gems_sample $09, SMP_HOUL_DAT, SMP_HOUL_END             ;   9 $09
SMP_DRUM_0A:    gems_sample $08, SMP_DRUM_0A_DAT, SMP_DRUM_0A_END       ;  10 $0A
SMP_CAT_MEOW:   gems_sample $07, SMP_CAT_MEOW_DAT, SMP_CAT_MEOW_END     ;  11 $0B
SMP_THORNS:     gems_sample $07, SMP_THORNS_DAT, SMP_THORNS_END         ;  12 $0C
SMP_PRINCESS:   gems_sample $06, SMP_PRINCESS_DAT, SMP_PRINCESS_END     ;  13 $0D
SMP_WHIP:       gems_sample $05, SMP_WHIP_DAT, SMP_WHIP_END             ;  14 $0E
SMP_CROW:       gems_sample $07, SMP_CROW_DAT, SMP_CROW_END             ;  15 $0F
SMP_COW:        gems_sample $0A, SMP_COW_DAT, SMP_COW_END               ;  16 $10
SMP_DOG:        gems_sample $0A, SMP_DOG_DAT, SMP_DOG_END               ;  17 $11
SMP_HAMSTER:    gems_sample $08, SMP_HAMSTER_DAT, SMP_HAMSTER_END       ;  18 $12
SMP_JIM_HIT:    gems_sample $0A, SMP_JIM_HIT_DAT, SMP_JIM_HIT_END       ;  19 $13
SMP_GLASS:      gems_sample $05, SMP_GLASS_DAT, SMP_GLASS_END           ;  20 $14
SMP_SPRING:     gems_sample $07, SMP_SPRING_DAT, SMP_SPRING_END         ;  21 $15
SMP_PETE_WOOF:  gems_sample $09, SMP_PETE_WOOF_DAT, SMP_PETE_WOOF_END   ;  22 $16
SMP_EFFECT:     gems_sample $05, SMP_EFFECT_DAT, SMP_EFFECT_END         ;  23 $17
SMP_MONKEY:     gems_sample $06, SMP_MONKEY_DAT, SMP_MONKEY_END         ;  24 $18
SMP_SNOT:       gems_sample $0A, SMP_SNOT_DAT, SMP_SNOT_END             ;  25 $19
SMP_RUMBLE:     gems_sample $08, SMP_RUMBLE_DAT, SMP_RUMBLE_END         ;  26 $1A
SMP_CHEATER:    gems_sample $05, SMP_CHEATER_DAT, SMP_CHEATER_END       ;  27 $1B
SMP_DOOR:       gems_sample $0A, SMP_DOOR_DAT, SMP_DOOR_END             ;  28 $1C
SMP_DOOR_CREAK: gems_sample $0A, SMP_DOOR_CREAK_DAT, SMP_DOOR_CREAK_END ;  29 $1D
SMP_HEADGUN:    gems_sample $08, SMP_HEADGUN_DAT, SMP_HEADGUN_END       ;  30 $1E
SMP_BURST:      gems_sample $08, SMP_BURST_DAT, SMP_BURST_END           ;  31 $1F
SMP_REFREGER:   gems_sample $09, SMP_REFREGER_DAT, SMP_REFREGER_END     ;  32 $20
SMP_RUMBLE_2:   gems_sample $08, SMP_RUMBLE_2_DAT, SMP_RUMBLE_2_END     ;  33 $21
SMP_LEVER:      gems_sample $07, SMP_LEVER_DAT, SMP_LEVER_END           ;  34 $22
SMP_CHICKEN:    gems_sample $08, SMP_CHICKEN_DAT, SMP_CHICKEN_END       ;  35 $23
SMP_MONSTER:    gems_sample $09, SMP_MONSTER_DAT, SMP_MONSTER_END       ;  36 $24
SMP_CHICKEN_2:  gems_sample $08, SMP_CHICKEN_2_DAT, SMP_CHICKEN_2_END   ;  37 $25
SMP_CHUCK:      gems_sample $08, SMP_CHUCK_DAT, SMP_CHUCK_END           ;  38 $26
SMP_CHUCK_2:    gems_sample $07, SMP_CHUCK_2_DAT, SMP_CHUCK_2_END       ;  39 $27
SMP_TIRE_JUMP:  gems_sample $09, SMP_TIRE_JUMP_DAT, SMP_TIRE_JUMP_END   ;  40 $28
SMP_LIVEUP:     gems_sample $05, SMP_LIVEUP_DAT, SMP_LIVEUP_END         ;  41 $29
SMP_JIM_GROUND: gems_sample $07, SMP_JIM_GROUND_DAT, SMP_JIM_GROUND_END ;  42 $2A
                gems_sample_none                                        ;  43 $2B
SMP_DOG_2:      gems_sample $09, SMP_DOG_2_DAT, SMP_DOG_2_END           ;  44 $2C
SMP_WTR_PLOP:   gems_sample $05, SMP_WTR_PLOP_DAT, SMP_WTR_PLOP_END     ;  45 $2D
                gems_sample_none                                        ;  46 $2E
SMP_SNOT_2:     gems_sample $08, SMP_SNOT_2_DAT, SMP_SNOT_2_END         ;  47 $2F
SMP_UFO:        gems_sample $07, SMP_UFO_DAT, SMP_UFO_END               ;  48 $30
SMP_EJIM_TITLE: gems_sample $05, SMP_EJIM_TITLE_DAT, SMP_EJIM_TITLE_END ;  49 $31
                gems_sample_none                                        ;  50 $32
SMP_BONUS:      gems_sample $0A, SMP_BONUS_DAT, SMP_BONUS_END           ;  51 $33
SMP_QUEEN:      gems_sample $06, SMP_QUEEN_DAT, SMP_QUEEN_END           ;  52 $34
SMP_DOG_3:      gems_sample $09, SMP_DOG_3_DAT, SMP_DOG_3_END           ;  53 $35
SMP_RICOCHET:   gems_sample $08, SMP_RICOCHET_DAT, SMP_RICOCHET_END     ;  54 $36
SMP_DOG_4:      gems_sample $07, SMP_DOG_4_DAT, SMP_DOG_4_END           ;  55 $37
SMP_CHUCK_3:    gems_sample $07, SMP_CHUCK_3_DAT, SMP_CHUCK_3_END       ;  56 $38
                gems_sample_none                                        ;  57 $39
SMP_GROOVY:     gems_sample $05, SMP_GROOVY_DAT, SMP_GROOVY_END         ;  58 $3A
                gems_sample_none                                        ;  59 $3B
SMP_SCREAM:     gems_sample $07, SMP_SCREAM_DAT, SMP_SCREAM_END         ;  60 $3C
SMP_SCREAM_4:   gems_sample $08, SMP_SCREAM_4_DAT, SMP_SCREAM_4_END     ;  61 $3D
SMP_SCRATCH:    gems_sample $08, SMP_SCRATCH_DAT, SMP_SCRATCH_END       ;  62 $3E
SMP_JIM_MUSCLE: gems_sample $06, SMP_JIM_MUSCLE_DAT, SMP_JIM_MUSCLE_END ;  63 $3F
SMP_JIM_HEY:    gems_sample $05, SMP_JIM_HEY_DAT, SMP_JIM_HEY_END       ;  64 $40
                gems_sample_none                                        ;  65 $41
                gems_sample_none                                        ;  66 $42
SMP_JIM_SWEARS: gems_sample_ex $16, SMP_JIM_SWEARS_DAT, SMP_JIM_SWEARS_END, 0, SMP_JIM_SWEARS_END-SMP_JIM_SWEARS_DAT, 0;  67 $43
SMP_SCREAM_7:   gems_sample $05, SMP_SCREAM_7_DAT, SMP_SCREAM_7_END     ;  68 $44
                gems_sample_none                                        ;  69 $45
SMP_JIM_HIT_2:  gems_sample $05, SMP_JIM_HIT_2_DAT, SMP_JIM_HIT_2_END   ;  70 $46
                gems_sample_none                                        ;  71 $47
SMP_JIM_SPEED:  gems_sample $05, SMP_JIM_SPEED_DAT, SMP_JIM_SPEED_END   ;  72 $48
SMP_JIM_YEHOO:  gems_sample $05, SMP_JIM_YEHOO_DAT, SMP_JIM_YEHOO_END   ;  73 $49
SMP_JIM_WUUH:   gems_sample $05, SMP_JIM_WUUH_DAT, SMP_JIM_WUUH_END     ;  74 $4A
SMP_JIM_AMMO:   gems_sample $05, SMP_JIM_AMMO_DAT, SMP_JIM_AMMO_END     ;  75 $4B
                gems_sample_none                                        ;  76 $4C
SMP_JIM_LALALA: gems_sample $05, SMP_JIM_LALALA_DAT, SMP_JIM_LALALA_END ;  77 $4D
                gems_sample_none                                        ;  78 $4E
SMP_COW_2:      gems_sample $05, SMP_COW_2_DAT, SMP_COW_2_END           ;  79 $4F
                gems_sample_none                                        ;  80 $50
SMP_JIM_HOUYEAH:gems_sample $05, SMP_JIM_HOUYEAH_DAT, SMP_JIM_HOUYEAH_END;  81 $51
SMP_JIM_OUCH:   gems_sample $05, SMP_JIM_OUCH_DAT, SMP_JIM_OUCH_END     ;  82 $52
SMP_JIM_AYAU:   gems_sample $05, SMP_JIM_AYAU_DAT, SMP_JIM_AYAU_END     ;  83 $53
SMP_JIM_DAU:    gems_sample $06, SMP_JIM_DAU_DAT, SMP_JIM_DAU_END       ;  84 $54
SMP_JIM_PLASMA: gems_sample $05, SMP_JIM_PLASMA_DAT, SMP_JIM_PLASMA_END ;  85 $55
SMP_JIM_AAAH:   gems_sample $06, SMP_JIM_AAAH_DAT, SMP_JIM_AAAH_END     ;  86 $56
SMP_JIM_AAAH_2: gems_sample $06, SMP_JIM_AAAH_2_DAT, SMP_JIM_AAAH_2_END ;  87 $57
                gems_sample_none                                        ;  88 $58
                gems_sample_none                                        ;  89 $59
SMP_PRISONER:   gems_sample $07, SMP_PRISONER_DAT, SMP_PRISONER_END     ;  90 $5A
SMP_DRUM_00_DAT:
    binclude "binaries/sounds/snd_26B1AC.bin"
SMP_DRUM_00_END:
    
SMP_DRUM_01_DAT:
    binclude "binaries/sounds/snd_26BD2A.bin"
SMP_DRUM_01_END:
    
SMP_DRUM_02_DAT:
    binclude "binaries/sounds/snd_26C793.bin"
SMP_DRUM_02_END:
    
SMP_DRUM_03_DAT:
    binclude "binaries/sounds/snd_26D2E5.bin"
SMP_DRUM_03_END:
    
SMP_DRUM_04_DAT:
    binclude "binaries/sounds/snd_26E5C0.bin"
SMP_DRUM_04_END:
    
SMP_DRUM_05_DAT:
    binclude "binaries/sounds/snd_26ED6B.bin"
SMP_DRUM_05_END:
    
SMP_DRUM_06_DAT:
    binclude "binaries/sounds/snd_26F5D4.bin"
SMP_DRUM_06_END:
    
SMP_DRUM_07_DAT:
    binclude "binaries/sounds/snd_26F848.bin"
SMP_DRUM_07_END:
    
SMP_DRUM_08_DAT:
    binclude "binaries/sounds/snd_27015C.bin"
SMP_DRUM_08_END:
    
SMP_HOUL_DAT:
    binclude "binaries/sounds/snd_270EFB.bin"
SMP_HOUL_END:
    
SMP_DRUM_0A_DAT:
    binclude "binaries/sounds/snd_27194A.bin"
SMP_DRUM_0A_END:
    
SMP_CAT_MEOW_DAT:
    binclude "binaries/sounds/snd_2721CD.bin"
SMP_CAT_MEOW_END:
    
SMP_THORNS_DAT:
    binclude "binaries/sounds/snd_2738C4.bin"
SMP_THORNS_END:
    
SMP_PRINCESS_DAT:
    binclude "binaries/sounds/snd_274BB1.bin"
SMP_PRINCESS_END:
    
SMP_WHIP_DAT:
    binclude "binaries/sounds/snd_27663B.bin"
SMP_WHIP_END:
    
SMP_CROW_DAT:
    binclude "binaries/sounds/snd_277B90.bin"
SMP_CROW_END:
    
SMP_COW_DAT:
    binclude "binaries/sounds/snd_27927F.bin"
SMP_COW_END:
    
SMP_DOG_DAT:
    binclude "binaries/sounds/snd_27B638.bin"
SMP_DOG_END:
    
SMP_HAMSTER_DAT:
    binclude "binaries/sounds/snd_27C35F.bin"
SMP_HAMSTER_END:
    
SMP_JIM_HIT_DAT:
    binclude "binaries/sounds/snd_27C9A6.bin"
SMP_JIM_HIT_END:
    
SMP_GLASS_DAT:
    binclude "binaries/sounds/snd_27CE63.bin"
SMP_GLASS_END:
    
SMP_SPRING_DAT:
    binclude "binaries/sounds/snd_27E16D.bin"
SMP_SPRING_END:
    
SMP_PETE_WOOF_DAT:
    binclude "binaries/sounds/snd_27E83C.bin"
SMP_PETE_WOOF_END:
    
SMP_EFFECT_DAT:
    binclude "binaries/sounds/snd_27EDA9.bin"
SMP_EFFECT_END:
    
SMP_MONKEY_DAT:
    binclude "binaries/sounds/snd_27F147.bin"
SMP_MONKEY_END:
    
SMP_SNOT_DAT:
    binclude "binaries/sounds/snd_280AE0.bin"
SMP_SNOT_END:
    
SMP_RUMBLE_DAT:
    binclude "binaries/sounds/snd_281432.bin"
SMP_RUMBLE_END:
    
SMP_CHEATER_DAT:
    binclude "binaries/sounds/snd_282D46.bin"
SMP_CHEATER_END:
    
SMP_DOOR_DAT:
    binclude "binaries/sounds/snd_28431A.bin"
SMP_DOOR_END:
    
SMP_DOOR_CREAK_DAT:
    binclude "binaries/sounds/snd_284AC8.bin"
SMP_DOOR_CREAK_END:
    
SMP_HEADGUN_DAT:
    binclude "binaries/sounds/snd_285A70.bin"
SMP_HEADGUN_END:
    
SMP_BURST_DAT:
    binclude "binaries/sounds/snd_28662E.bin"
SMP_BURST_END:
    
SMP_REFREGER_DAT:
    binclude "binaries/sounds/snd_286F1F.bin"
SMP_REFREGER_END:
    
SMP_RUMBLE_2_DAT:
    binclude "binaries/sounds/snd_287F5A.bin"
SMP_RUMBLE_2_END:
    
SMP_LEVER_DAT:
    binclude "binaries/sounds/snd_289341.bin"
SMP_LEVER_END:
    
SMP_CHICKEN_DAT:
    binclude "binaries/sounds/snd_28A333.bin"
SMP_CHICKEN_END:
    
SMP_MONSTER_DAT:
    binclude "binaries/sounds/snd_28B4CD.bin"
SMP_MONSTER_END:
    
SMP_CHICKEN_2_DAT:
    binclude "binaries/sounds/snd_28C932.bin"
SMP_CHICKEN_2_END:
    
SMP_CHUCK_DAT:
    binclude "binaries/sounds/snd_28D48D.bin"
SMP_CHUCK_END:
    
SMP_CHUCK_2_DAT:
    binclude "binaries/sounds/snd_28E243.bin"
SMP_CHUCK_2_END:
    
SMP_TIRE_JUMP_DAT:
    binclude "binaries/sounds/snd_28F5A2.bin"
SMP_TIRE_JUMP_END:
    
SMP_LIVEUP_DAT:
    binclude "binaries/sounds/snd_28FD22.bin"
SMP_LIVEUP_END:
    
SMP_JIM_GROUND_DAT:
    binclude "binaries/sounds/snd_293071.bin"
SMP_JIM_GROUND_END:
    
SMP_DOG_2_DAT:
    binclude "binaries/sounds/snd_293BBA.bin"
SMP_DOG_2_END:
    
SMP_WTR_PLOP_DAT:
    binclude "binaries/sounds/snd_2956AB.bin"
SMP_WTR_PLOP_END:
    
SMP_SNOT_2_DAT:
    binclude "binaries/sounds/snd_295A59.bin"
SMP_SNOT_2_END:
    
SMP_UFO_DAT:
    binclude "binaries/sounds/snd_2961B5.bin"
SMP_UFO_END:
    
SMP_EJIM_TITLE_DAT:
    binclude "binaries/sounds/snd_296D3B.bin"
SMP_EJIM_TITLE_END:
    
SMP_BONUS_DAT:
    binclude "binaries/sounds/snd_29B4DA.bin"
SMP_BONUS_END:
    
SMP_QUEEN_DAT:
    binclude "binaries/sounds/snd_29C355.bin"
SMP_QUEEN_END:
    
SMP_DOG_3_DAT:
    binclude "binaries/sounds/snd_29CAA1.bin"
SMP_DOG_3_END:
    
SMP_RICOCHET_DAT:
    binclude "binaries/sounds/snd_29F4B0.bin"
SMP_RICOCHET_END:
    
SMP_DOG_4_DAT:
    binclude "binaries/sounds/snd_2A04AB.bin"
SMP_DOG_4_END:
    
SMP_CHUCK_3_DAT:
    binclude "binaries/sounds/snd_2A1501.bin"
SMP_CHUCK_3_END:
    
SMP_GROOVY_DAT:
    binclude "binaries/sounds/snd_2A2A36.bin"
SMP_GROOVY_END:
    
SMP_SCREAM_DAT:
    binclude "binaries/sounds/snd_2A4774.bin"
SMP_SCREAM_END:
    
SMP_SCREAM_4_DAT:
    binclude "binaries/sounds/snd_2A6833.bin"
SMP_SCREAM_4_END:
    
SMP_SCRATCH_DAT:
    binclude "binaries/sounds/snd_2A7954.bin"
SMP_SCRATCH_END:
    
SMP_JIM_MUSCLE_DAT:
    binclude "binaries/sounds/snd_2A8349.bin"
SMP_JIM_MUSCLE_END:
    
SMP_JIM_HEY_DAT:
    binclude "binaries/sounds/snd_2A9ADC.bin"
SMP_JIM_HEY_END:
    
SMP_JIM_SWEARS_DAT:
    binclude "binaries/sounds/snd_2AAAC7.bin"
SMP_JIM_SWEARS_END:
    
SMP_SCREAM_7_DAT:
    binclude "binaries/sounds/snd_2AD592.bin"
SMP_SCREAM_7_END:
    
SMP_JIM_HIT_2_DAT:
    binclude "binaries/sounds/snd_2AF51E.bin"
SMP_JIM_HIT_2_END:
    
SMP_JIM_SPEED_DAT:
    binclude "binaries/sounds/snd_2AFF17.bin"
SMP_JIM_SPEED_END:
    
SMP_JIM_YEHOO_DAT:
    binclude "binaries/sounds/snd_2B3EC3.bin"
SMP_JIM_YEHOO_END:
    
SMP_JIM_WUUH_DAT:
    binclude "binaries/sounds/snd_2B6E29.bin"
SMP_JIM_WUUH_END:
    
SMP_JIM_AMMO_DAT:
    binclude "binaries/sounds/snd_2B7ABE.bin"
SMP_JIM_AMMO_END:
    
SMP_JIM_LALALA_DAT:
    binclude "binaries/sounds/snd_2B93A6.bin"
SMP_JIM_LALALA_END:
    
SMP_COW_2_DAT:
    binclude "binaries/sounds/snd_2BC2B2.bin"
SMP_COW_2_END:
    
SMP_JIM_HOUYEAH_DAT:
    binclude "binaries/sounds/snd_2BD4DA.bin"
SMP_JIM_HOUYEAH_END:
    
SMP_JIM_OUCH_DAT:
    binclude "binaries/sounds/snd_2BFFBE.bin"
SMP_JIM_OUCH_END:
    
SMP_JIM_AYAU_DAT:
    binclude "binaries/sounds/snd_2C1680.bin"
SMP_JIM_AYAU_END:
    
SMP_JIM_DAU_DAT:
    binclude "binaries/sounds/snd_2C2F9D.bin"
SMP_JIM_DAU_END:
    
SMP_JIM_PLASMA_DAT:
    binclude "binaries/sounds/snd_2C3B7C.bin"
SMP_JIM_PLASMA_END:
    
SMP_JIM_AAAH_DAT:
    binclude "binaries/sounds/snd_2C563C.bin"
SMP_JIM_AAAH_END:
    
SMP_JIM_AAAH_2_DAT:
    binclude "binaries/sounds/snd_2C61CC.bin"
SMP_JIM_AAAH_2_END:
    
SMP_PRISONER_DAT:
    binclude "binaries/sounds/snd_2C91BC.bin"
SMP_PRISONER_END:
