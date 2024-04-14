byte_2FCE60:    dc.b   0,  0,$7E,$7D,$81,$80,$7F,$7E,$80,$7E
                                        ; DATA XREF: ROM:off_3248   o
                dc.w sprite_8_8
                dc.w $7C7B
                dc.w $9500 ! ((grp_F8060 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8060 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8060 / 2) >> 16)
                dc.w 1
