byte_2FADBC:    dc.b   0,  0,$80,$7F,$82,$82,$81,$80,$82,$80
                                        ; DATA XREF: ROM:off_2E78   o
                dc.w sprite_8_8
                dc.w $7E7D
                dc.w $9500 ! ((grp_F7200 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7200 / 2) >> 16)
                dc.w 1
