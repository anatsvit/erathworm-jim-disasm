byte_2CF870:    dc.b   0,  1,$7C,$6E,$83,$92,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_BA0   o
                dc.w sprite_16_32
                dc.w $7A6D
                dc.w $9500 ! ((grp_5CD00 / 2) & $00FF)
                dc.w $9600 ! (((grp_5CD00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_5CD00 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_8
                dc.w $7A8D
                dc.w $9500 ! ((grp_C8880 / 2) & $00FF)
                dc.w $9600 ! (((grp_C8880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C8880 / 2) >> 16)
                dc.w 2
