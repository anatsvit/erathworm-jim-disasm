byte_2FB24E:    dc.b   0,  1,$74,$79,$88,$82,$7E,$7D,$7F,$7D
                                        ; DATA XREF: ROM:off_2F44   o
                dc.w sprite_24_16
                dc.w $7277
                dc.w $9500 ! ((grp_16AF80 / 2) & $00FF)
                dc.w $9600 ! (((grp_16AF80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16AF80 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_8
                dc.w $8A7F
                dc.w $9500 ! ((grp_F7760 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7760 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7760 / 2) >> 16)
                dc.w 1
