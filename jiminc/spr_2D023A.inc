byte_2D023A:    dc.b   0,  2,$6B,$6B,$85,$80,$78,$75,$79,$75
                                        ; DATA XREF: ROM:off_CF4   o
                dc.w sprite_16_16
                dc.w $7974
                dc.w $9500 ! ((grp_75980 / 2) & $00FF)
                dc.w $9600 ! (((grp_75980 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_75980 / 2) >> 16)
                dc.w 4
                dc.w sprite_32_8
                dc.w $6969
                dc.w $9500 ! ((grp_97400 / 2) & $00FF)
                dc.w $9600 ! (((grp_97400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_97400 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $796C
                dc.w $9500 ! ((grp_C8C00 / 2) & $00FF)
                dc.w $9600 ! (((grp_C8C00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C8C00 / 2) >> 16)
                dc.w 2
