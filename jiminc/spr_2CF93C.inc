byte_2CF93C:    dc.b   0,  0,$7E,$83,$80,$81,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_BB8   o
                dc.w sprite_8_8
                dc.w $7C81
                dc.w $9500 ! ((grp_E2E80 / 2) & $00FF)
                dc.w $9600 ! (((grp_E2E80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E2E80 / 2) >> 16)
                dc.w 1
