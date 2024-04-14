byte_2F552C:    dc.b   0,  1,$7F,$7B,$85,$82,$82,$7E,$83,$7E
                                        ; DATA XREF: ROM:off_2AA8   o
                dc.w sprite_16_8
                dc.w $7D79
                dc.w $9500 ! ((grp_DCB00 / 2) & $00FF)
                dc.w $9600 ! (((grp_DCB00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DCB00 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7D81
                dc.w $9500 ! ((grp_F47E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F47E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F47E0 / 2) >> 16)
                dc.w 1
