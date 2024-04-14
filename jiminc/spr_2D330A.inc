byte_2D330A:    dc.b   0,  0,$7F,$82,$80,$85,$7F,$83,$80,$83
                                        ; DATA XREF: ROM:off_FA4   o
                dc.w sprite_8_8
                dc.w $7B80
                dc.w $9500 ! ((grp_E46E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E46E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E46E0 / 2) >> 16)
                dc.w 1
