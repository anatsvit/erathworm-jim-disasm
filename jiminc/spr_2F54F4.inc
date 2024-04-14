byte_2F54F4:    dc.b   0,  0,$80,$7E,$82,$80,$81,$7F,$82,$7F
                                        ; DATA XREF: ROM:off_2AA0   o
                dc.w sprite_8_8
                dc.w $7E7C
                dc.w $9500 ! ((grp_F4780 / 2) & $00FF)
                dc.w $9600 ! (((grp_F4780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F4780 / 2) >> 16)
                dc.w 1
