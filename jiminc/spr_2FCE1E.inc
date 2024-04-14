byte_2FCE1E:    dc.b   0,  0,$7F,$79,$81,$83,$80,$7E,$81,$7E
                                        ; DATA XREF: ROM:off_323C   o
                dc.w sprite_8_16
                dc.w $7D77
                dc.w $9500 ! ((grp_C5880 / 2) & $00FF)
                dc.w $9600 ! (((grp_C5880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C5880 / 2) >> 16)
                dc.w 2
