byte_2FE078:    dc.b   0,  0,$81,$81,$7E,$7E,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_3368   o
                dc.w sprite_8_8
                dc.w $7F7F
                dc.w $9500 ! ((grp_F8860 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8860 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8860 / 2) >> 16)
                dc.w 1
