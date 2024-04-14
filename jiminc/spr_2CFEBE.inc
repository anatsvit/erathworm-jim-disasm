byte_2CFEBE:    dc.b   0,  0,$81,$7F,$7E,$86,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_C84   o
                dc.w sprite_8_16
                dc.w $7F7D
                dc.w $9500 ! ((grp_B1740 / 2) & $00FF)
                dc.w $9600 ! (((grp_B1740 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B1740 / 2) >> 16)
                dc.w 2
