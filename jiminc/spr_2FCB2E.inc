byte_2FCB2E:    dc.b   0,  0,$7E,$7A,$80,$85,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_31BC   o
                dc.w sprite_8_16
                dc.w $7B78
                dc.w $9500 ! ((grp_C5780 / 2) & $00FF)
                dc.w $9600 ! (((grp_C5780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C5780 / 2) >> 16)
                dc.w 2
