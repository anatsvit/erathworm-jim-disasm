byte_2D0730:    dc.b   0,  0,$7E,$81,$81,$80,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_D70   o
                dc.w sprite_8_8
                dc.w $7C7F
                dc.w $9500 ! ((grp_E3320 / 2) & $00FF)
                dc.w $9600 ! (((grp_E3320 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E3320 / 2) >> 16)
                dc.w 1
