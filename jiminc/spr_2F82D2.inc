byte_2F82D2:    dc.b   0,  3,$71,$6A,$90,$A0,$81,$8E,$82,$8E
                                        ; DATA XREF: ROM:off_2C5C   o
                dc.w sprite_32_24
                dc.w $707E
                dc.w $9500 ! ((grp_1381C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_1381C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1381C0 / 2) >> 16)
                dc.w $C
                dc.w sprite_16_8
                dc.w $7B96
                dc.w $9500 ! ((grp_DDDC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_DDDC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DDDC0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $907E
                dc.w $9500 ! ((grp_C3700 / 2) & $00FF)
                dc.w $9600 ! (((grp_C3700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C3700 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7B9E
                dc.w $9500 ! ((grp_F5F60 / 2) & $00FF)
                dc.w $9600 ! (((grp_F5F60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F5F60 / 2) >> 16)
                dc.w 1
