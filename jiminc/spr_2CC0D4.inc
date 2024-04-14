byte_2CC0D4:    dc.b   0,  2,$82,$82,$91,$94,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:off_6E0   o
                dc.w sprite_16_16
                dc.w $8188
                dc.w $9500 ! ((grp_72880 / 2) & $00FF)
                dc.w $9600 ! (((grp_72880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_72880 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $8080
                dc.w $9500 ! ((grp_C6900 / 2) & $00FF)
                dc.w $9600 ! (((grp_C6900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C6900 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $918B
                dc.w $9500 ! ((grp_E1140 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1140 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1140 / 2) >> 16)
                dc.w 1
