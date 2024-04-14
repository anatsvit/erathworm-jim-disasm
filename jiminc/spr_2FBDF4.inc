byte_2FBDF4:    dc.b   0,  0,$81,$7F,$81,$81,$81,$80,$82,$80
                                        ; DATA XREF: ROM:off_3028   o
                dc.w sprite_8_8
                dc.w $7C7D
                dc.w $9500 ! ((grp_F7A60 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7A60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7A60 / 2) >> 16)
                dc.w 1
