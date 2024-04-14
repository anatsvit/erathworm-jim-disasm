byte_2FCFB0:    dc.b   0,  1,$74,$65,$9E,$6F,$89,$6A,$8A,$6A
                                        ; DATA XREF: ROM:off_3278   o
                dc.w sprite_16_16
                dc.w $7263
                dc.w $9500 ! ((grp_94C00 / 2) & $00FF)
                dc.w $9600 ! (((grp_94C00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94C00 / 2) >> 16)
                dc.w 4
                dc.w sprite_32_8
                dc.w $8263
                dc.w $9500 ! ((grp_A0A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_A0A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A0A00 / 2) >> 16)
                dc.w 4
