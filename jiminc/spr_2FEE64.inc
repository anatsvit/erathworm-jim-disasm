byte_2FEE64:    dc.b   0,  1,$16,$71,$41,$8C,$2B,$7E,$2C,$7E
                                        ; DATA XREF: ROM:00003500   o
                dc.w sprite_32_32
                dc.w $246F
                dc.w $9500 ! ((grp_45800 / 2) & $00FF)
                dc.w $9600 ! (((grp_45800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_45800 / 2) >> 16)
                dc.w $10
                dc.w sprite_16_32
                dc.w $1473
                dc.w $9500 ! ((grp_71A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_71A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_71A00 / 2) >> 16)
                dc.w 8
