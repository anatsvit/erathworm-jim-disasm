byte_2FAE2A:    dc.b   0,  0,$80,$80,$81,$81,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_2E8C   o
                dc.w sprite_8_8
                dc.w $7E7E
                dc.w $9500 ! ((grp_F72A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F72A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F72A0 / 2) >> 16)
                dc.w 1