byte_2FCE4A:    dc.b   0,  0,$7D,$80,$82,$7E,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_3244   o
                dc.w sprite_16_8
                dc.w $7B7E
                dc.w $9500 ! ((grp_DF900 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF900 / 2) >> 16)
                dc.w 2
