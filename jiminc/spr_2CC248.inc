byte_2CC248:    dc.b   0,  1,$82,$82,$8F,$98,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:off_710   o
                dc.w sprite_16_24
                dc.w $8080
                dc.w $9500 ! ((grp_16EC40 / 2) & $00FF)
                dc.w $9600 ! (((grp_16EC40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16EC40 / 2) >> 16)
                dc.w 6
                dc.w sprite_16_8
                dc.w $8098
                dc.w $9500 ! ((grp_C6A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_C6A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C6A00 / 2) >> 16)
                dc.w 2
