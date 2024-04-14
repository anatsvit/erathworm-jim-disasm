byte_2CFDC8:    dc.b   0,  1,$7C,$7B,$83,$89,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_C60   o
                dc.w sprite_16_16
                dc.w $7A79
                dc.w $9500 ! ((grp_75700 / 2) & $00FF)
                dc.w $9600 ! (((grp_75700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_75700 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $7C89
                dc.w $9500 ! ((grp_E30E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E30E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E30E0 / 2) >> 16)
                dc.w 1
