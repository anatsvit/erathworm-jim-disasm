byte_2FEA18:    dc.b   0,  2,$75,$89,$8F,$8F,$82,$86,$83,$86
                                        ; DATA XREF: ROM:off_3468   o
                dc.w sprite_32_8
                dc.w $728A
                dc.w $9500 ! ((grp_A1B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_A1B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A1B00 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $7D7D
                dc.w $9500 ! ((grp_F8F20 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8F20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8F20 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $8C82
                dc.w $9500 ! ((grp_F8F40 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8F40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8F40 / 2) >> 16)
                dc.w 1
