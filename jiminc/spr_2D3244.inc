byte_2D3244:    dc.b   0,  0,$7F,$83,$7F,$85,$7F,$84,$80,$84
                                        ; DATA XREF: ROM:off_F80   o
                dc.w sprite_8_8
                dc.w $7A81
                dc.w $9500 ! ((grp_E46A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E46A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E46A0 / 2) >> 16)
                dc.w 1
