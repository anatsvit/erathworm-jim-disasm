byte_2FBDDE:    dc.b   0,  0,$80,$7E,$82,$81,$81,$7F,$82,$7F
                                        ; DATA XREF: ROM:off_3024   o
                dc.w sprite_8_8
                dc.w $7D7C
                dc.w $9500 ! ((grp_F7A40 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7A40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7A40 / 2) >> 16)
                dc.w 1
