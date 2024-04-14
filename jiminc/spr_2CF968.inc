byte_2CF968:    dc.b   0,  0,$80,$84,$7F,$85,$7F,$84,$80,$84
                                        ; DATA XREF: ROM:off_BC0   o
                dc.w sprite_8_8
                dc.w $7E82
                dc.w $9500 ! ((grp_E2EC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E2EC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E2EC0 / 2) >> 16)
                dc.w 1
