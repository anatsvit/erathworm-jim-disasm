byte_2FC252:    dc.b   0,  1,$69,$8B,$74,$98,$6E,$91,$6F,$91
                                        ; DATA XREF: ROM:off_30CC   o
                dc.w sprite_8_24
                dc.w $6789
                dc.w $9500 ! ((grp_1A0380 / 2) & $00FF)
                dc.w $9600 ! (((grp_1A0380 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1A0380 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_16
                dc.w $6F89
                dc.w $9500 ! ((grp_C5240 / 2) & $00FF)
                dc.w $9600 ! (((grp_C5240 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C5240 / 2) >> 16)
                dc.w 2
