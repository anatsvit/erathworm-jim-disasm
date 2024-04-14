byte_2ECBDC:    dc.b   0,  1,$79,$7B,$88,$85,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_21E0   o
                dc.w sprite_16_8
                dc.w $797C
                dc.w $9500 ! ((grp_D8180 / 2) & $00FF)
                dc.w $9600 ! (((grp_D8180 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D8180 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8384
                dc.w $9500 ! ((grp_EFB40 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFB40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFB40 / 2) >> 16)
                dc.w 1
