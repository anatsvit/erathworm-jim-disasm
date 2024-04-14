byte_2ECD02:    dc.b   0,  2,$71,$7B,$8C,$8B,$7E,$83,$7F,$83
                                        ; DATA XREF: ROM:off_2204   o
                dc.w sprite_16_8
                dc.w $6F79
                dc.w $9500 ! ((grp_D82C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_D82C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D82C0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $877C
                dc.w $9500 ! ((grp_BE580 / 2) & $00FF)
                dc.w $9600 ! (((grp_BE580 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_BE580 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7F86
                dc.w $9500 ! ((grp_EFC20 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFC20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFC20 / 2) >> 16)
                dc.w 1
