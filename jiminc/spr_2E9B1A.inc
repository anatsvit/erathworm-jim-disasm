byte_2E9B1A:    dc.b   0,  0,$7E,$7C,$81,$82,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_1E9C   o
                dc.w sprite_8_16
                dc.w $7C7A
                dc.w $9500 ! ((grp_BD700 / 2) & $00FF)
                dc.w $9600 ! (((grp_BD700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_BD700 / 2) >> 16)
                dc.w 2
