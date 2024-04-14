byte_2ECBFE:    dc.b   0,  1,$79,$7B,$89,$86,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_21E4   o
                dc.w sprite_16_8
                dc.w $797B
                dc.w $9500 ! ((grp_D81C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_D81C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D81C0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8483
                dc.w $9500 ! ((grp_EFB60 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFB60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFB60 / 2) >> 16)
                dc.w 1
