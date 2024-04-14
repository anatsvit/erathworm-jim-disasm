byte_2FADA6:    dc.b   0,  0,$7F,$7F,$82,$82,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_2E74   o
                dc.w sprite_8_8
                dc.w $7D7D
                dc.w $9500 ! ((grp_F71E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F71E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F71E0 / 2) >> 16)
                dc.w 1
