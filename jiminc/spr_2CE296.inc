byte_2CE296:    dc.b   0,  0,$7F,$8B,$86,$92,$82,$8E,$83,$8E
                                        ; DATA XREF: ROM:off_A24   o
                dc.w sprite_16_16
                dc.w $7D89
                dc.w $9500 ! ((grp_73680 / 2) & $00FF)
                dc.w $9600 ! (((grp_73680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_73680 / 2) >> 16)
                dc.w 4
