byte_2ECBBA:    dc.b   0,  1,$78,$7A,$89,$85,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_21DC   o
                dc.w sprite_16_8
                dc.w $797B
                dc.w $9500 ! ((grp_D8140 / 2) & $00FF)
                dc.w $9600 ! (((grp_D8140 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D8140 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7983
                dc.w $9500 ! ((grp_EFB20 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFB20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFB20 / 2) >> 16)
                dc.w 1
