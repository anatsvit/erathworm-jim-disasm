byte_2FBDC8:    dc.b   0,  0,$7F,$7E,$83,$81,$81,$7F,$82,$7F
                                        ; DATA XREF: ROM:off_3020   o
                dc.w sprite_16_8
                dc.w $777C
                dc.w $9500 ! ((grp_DF380 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF380 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF380 / 2) >> 16)
                dc.w 2
