byte_2ECEE8:    dc.b   0,  2,$6E,$7F,$A2,$88,$88,$83,$89,$83
                                        ; DATA XREF: ROM:off_2240   o
                dc.w sprite_24_16
                dc.w $707D
                dc.w $9500 ! ((grp_163F00 / 2) & $00FF)
                dc.w $9600 ! (((grp_163F00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_163F00 / 2) >> 16)
                dc.w 6
                dc.w sprite_32_8
                dc.w $8880
                dc.w $9500 ! ((grp_9D700 / 2) & $00FF)
                dc.w $9600 ! (((grp_9D700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_9D700 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $6882
                dc.w $9500 ! ((grp_EFC80 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFC80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFC80 / 2) >> 16)
                dc.w 1
