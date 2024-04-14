byte_2D06C0:    dc.b   0,  1,$8F,$77,$A0,$88,$97,$7F,$98,$7F
                                        ; DATA XREF: ROM:off_D60   o
                dc.w sprite_16_24
                dc.w $8D75
                dc.w $9500 ! ((grp_170D40 / 2) & $00FF)
                dc.w $9600 ! (((grp_170D40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_170D40 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_16
                dc.w $9D75
                dc.w $9500 ! ((grp_B1940 / 2) & $00FF)
                dc.w $9600 ! (((grp_B1940 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B1940 / 2) >> 16)
                dc.w 2
