byte_2CFCC6:    dc.b   0,  1,$7B,$7B,$83,$8A,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_C3C   o
                dc.w sprite_16_16
                dc.w $7979
                dc.w $9500 ! ((grp_75300 / 2) & $00FF)
                dc.w $9600 ! (((grp_75300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_75300 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $7C89
                dc.w $9500 ! ((grp_E3040 / 2) & $00FF)
                dc.w $9600 ! (((grp_E3040 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E3040 / 2) >> 16)
                dc.w 1
