byte_2EB11C:    dc.b   0,  2,$7F,$62,$96,$79,$83,$6B,$84,$6B
                                        ; DATA XREF: ROM:off_1FE0   o
                dc.w sprite_32_32
                dc.w $7A5F
                dc.w $9500 ! ((grp_2A400 / 2) & $00FF)
                dc.w $9600 ! (((grp_2A400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_2A400 / 2) >> 16)
                dc.w $10
                dc.w sprite_16_8
                dc.w $6E57
                dc.w $9500 ! ((grp_D7800 / 2) & $00FF)
                dc.w $9600 ! (((grp_D7800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D7800 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $725F
                dc.w $9500 ! ((grp_EF340 / 2) & $00FF)
                dc.w $9600 ! (((grp_EF340 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EF340 / 2) >> 16)
                dc.w 1
