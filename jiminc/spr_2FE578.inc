byte_2FE578:    dc.b   0,  1,$7F,$7C,$8B,$85,$85,$80,$86,$80
                                        ; DATA XREF: ROM:off_33E8   o
                dc.w sprite_16_8
                dc.w $7D82
                dc.w $9500 ! ((grp_E0DC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E0DC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E0DC0 / 2) >> 16)
                dc.w 2
                dc.w sprite_16_8
                dc.w $817A
                dc.w $9500 ! ((grp_E0E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_E0E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E0E00 / 2) >> 16)
                dc.w 2
