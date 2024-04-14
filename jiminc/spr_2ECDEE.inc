byte_2ECDEE:    dc.b   0,  1,$73,$80,$8A,$86,$7E,$83,$7F,$83
                                        ; DATA XREF: ROM:off_2224   o
                dc.w sprite_24_8
                dc.w $797E
                dc.w $9500 ! ((grp_18C820 / 2) & $00FF)
                dc.w $9600 ! (((grp_18C820 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_18C820 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_8
                dc.w $7181
                dc.w $9500 ! ((grp_EFD20 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFD20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFD20 / 2) >> 16)
                dc.w 1
