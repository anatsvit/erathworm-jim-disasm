byte_2F454C:    dc.b   0,  0,$81,$81,$7F,$7F,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_2980   o
                dc.w sprite_8_8
                dc.w $7A7F
                dc.w $9500 ! ((grp_F39C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F39C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F39C0 / 2) >> 16)
                dc.w 1
