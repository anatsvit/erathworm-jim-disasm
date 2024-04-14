byte_2FAE40:    dc.b   0,  0,$80,$80,$81,$81,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_2E90   o
                dc.w sprite_8_8
                dc.w $7E7E
                dc.w $9500 ! ((grp_F72C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F72C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F72C0 / 2) >> 16)
                dc.w 1
