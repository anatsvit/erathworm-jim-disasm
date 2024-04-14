byte_2FD2C2:    dc.b   0,  2,$7D,$78,$87,$8D,$82,$82,$83,$82
                                        ; DATA XREF: ROM:off_32CC   o
                dc.w sprite_16_16
                dc.w $7B78
                dc.w $9500 ! ((grp_94E80 / 2) & $00FF)
                dc.w $9600 ! (((grp_94E80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94E80 / 2) >> 16)
                dc.w 4
                dc.w sprite_32_8
                dc.w $7388
                dc.w $9500 ! ((grp_A1600 / 2) & $00FF)
                dc.w $9600 ! (((grp_A1600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A1600 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $8370
                dc.w $9500 ! ((grp_F82A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F82A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F82A0 / 2) >> 16)
                dc.w 1
