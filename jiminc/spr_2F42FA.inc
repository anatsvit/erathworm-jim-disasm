byte_2F42FA:    dc.b   0,  0,$7F,$7E,$82,$82,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_2914   o
                dc.w sprite_8_16
                dc.w $7D7C
                dc.w $9500 ! ((grp_C1480 / 2) & $00FF)
                dc.w $9600 ! (((grp_C1480 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C1480 / 2) >> 16)
                dc.w 2
