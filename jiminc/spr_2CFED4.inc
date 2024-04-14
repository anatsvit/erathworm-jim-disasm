byte_2CFED4:    dc.b   0,  0,$7F,$7F,$80,$86,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_C88   o
                dc.w sprite_8_16
                dc.w $7D7D
                dc.w $9500 ! ((grp_B1780 / 2) & $00FF)
                dc.w $9600 ! (((grp_B1780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B1780 / 2) >> 16)
                dc.w 2
