byte_2EABE8:    dc.b   0,  1,$77,$6F,$88,$91,$7E,$80,$7F,$80
                                        ; DATA XREF: ROM:off_1F98   o
                dc.w sprite_24_32
                dc.w $7374
                dc.w $9500 ! ((grp_10FCC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_10FCC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_10FCC0 / 2) >> 16)
                dc.w $C
                dc.w sprite_16_8
                dc.w $7A6C
                dc.w $9500 ! ((grp_D7600 / 2) & $00FF)
                dc.w $9600 ! (((grp_D7600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D7600 / 2) >> 16)
                dc.w 2
