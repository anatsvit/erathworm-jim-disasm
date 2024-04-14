byte_2FEEC0:    dc.b   0,  1,$71,$5E,$8C,$89,$7E,$73,$7F,$73
                                        ; DATA XREF: ROM:00003508   o
                dc.w sprite_32_32
                dc.w $6F5C
                dc.w $9500 ! ((grp_45C00 / 2) & $00FF)
                dc.w $9600 ! (((grp_45C00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_45C00 / 2) >> 16)
                dc.w $10
                dc.w sprite_32_16
                dc.w $737C
                dc.w $9500 ! ((grp_59B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_59B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_59B00 / 2) >> 16)
                dc.w 8
