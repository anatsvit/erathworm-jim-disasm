byte_2EFA78:    dc.b   0,  1,$79,$82,$85,$8F,$7F,$88,$80,$88
                                        ; DATA XREF: ROM:off_2550   o
                dc.w sprite_16_16
                dc.w $7780
                dc.w $9500 ! ((grp_8A500 / 2) & $00FF)
                dc.w $9600 ! (((grp_8A500 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8A500 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $7D90
                dc.w $9500 ! ((grp_F0D80 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0D80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0D80 / 2) >> 16)
                dc.w 1
