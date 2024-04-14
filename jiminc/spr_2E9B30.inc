byte_2E9B30:    dc.b   0,  0,$7E,$7C,$82,$82,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_1EA0   o
                dc.w sprite_8_16
                dc.w $7D78
                dc.w $9500 ! ((grp_BD640 / 2) & $00FF)
                dc.w $9600 ! (((grp_BD640 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_BD640 / 2) >> 16)
                dc.w 2
