byte_2CF952:    dc.b   0,  0,$7F,$82,$80,$82,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_BBC   o
                dc.w sprite_8_8
                dc.w $7D80
                dc.w $9500 ! ((grp_E2EA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E2EA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E2EA0 / 2) >> 16)
                dc.w 1
