byte_2D34D8:    dc.b   0,  0,$80,$83,$7F,$85,$7F,$84,$80,$84
                                        ; DATA XREF: ROM:off_FF8   o
                dc.w sprite_8_8
                dc.w $7A81
                dc.w $9500 ! ((grp_E4760 / 2) & $00FF)
                dc.w $9600 ! (((grp_E4760 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E4760 / 2) >> 16)
                dc.w 1
