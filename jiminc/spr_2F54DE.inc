byte_2F54DE:    dc.b   0,  0,$7F,$80,$82,$82,$80,$81,$81,$81
                                        ; DATA XREF: ROM:off_2A9C   o
                dc.w sprite_8_8
                dc.w $7D7E
                dc.w $9500 ! ((grp_F4760 / 2) & $00FF)
                dc.w $9600 ! (((grp_F4760 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F4760 / 2) >> 16)
                dc.w 1
