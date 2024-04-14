byte_2FE0A4:    dc.b   0,  0,$80,$7F,$7F,$7E,$7F,$7E,$80,$7E
                                        ; DATA XREF: ROM:off_3370   o
                dc.w sprite_8_8
                dc.w $7E7D
                dc.w $9500 ! ((grp_F88A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F88A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F88A0 / 2) >> 16)
                dc.w 1
