byte_2ECC20:    dc.b   0,  1,$7A,$7A,$88,$89,$80,$81,$81,$81
                                        ; DATA XREF: ROM:off_21E8   o
                dc.w sprite_16_8
                dc.w $7A7A
                dc.w $9500 ! ((grp_D8200 / 2) & $00FF)
                dc.w $9600 ! (((grp_D8200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D8200 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8182
                dc.w $9500 ! ((grp_EFB80 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFB80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFB80 / 2) >> 16)
                dc.w 1
