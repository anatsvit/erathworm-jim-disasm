byte_2D075C:    dc.b   0,  0,$7F,$80,$81,$81,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_D78   o
                dc.w sprite_8_8
                dc.w $7D7E
                dc.w $9500 ! ((grp_E3360 / 2) & $00FF)
                dc.w $9600 ! (((grp_E3360 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E3360 / 2) >> 16)
                dc.w 1
