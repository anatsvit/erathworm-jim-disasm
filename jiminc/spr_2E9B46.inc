byte_2E9B46:    dc.b   0,  0,$80,$7C,$83,$82,$81,$7F,$82,$7F
                                        ; DATA XREF: ROM:off_1EA4   o
                dc.w sprite_8_16
                dc.w $7E7A
                dc.w $9500 ! ((grp_BD680 / 2) & $00FF)
                dc.w $9600 ! (((grp_BD680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_BD680 / 2) >> 16)
                dc.w 2
