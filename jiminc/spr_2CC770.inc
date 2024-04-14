byte_2CC770:    dc.b   0,  2,$77,$68,$8F,$7B,$87,$7F,$88,$7F
                                        ; DATA XREF: ROM:off_7B8   o
                dc.w sprite_16_24
                dc.w $7B66
                dc.w $9500 ! ((grp_16F540 / 2) & $00FF)
                dc.w $9600 ! (((grp_16F540 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16F540 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_8
                dc.w $7373
                dc.w $9500 ! ((grp_E14C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E14C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E14C0 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $8B72
                dc.w $9500 ! ((grp_E14A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E14A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E14A0 / 2) >> 16)
                dc.w 1
