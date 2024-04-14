byte_2F5436:    dc.b   0,  0,$7F,$7F,$82,$81,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_2A84   o
                dc.w sprite_8_8
                dc.w $7D7D
                dc.w $9500 ! ((grp_F46C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F46C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F46C0 / 2) >> 16)
                dc.w 1
