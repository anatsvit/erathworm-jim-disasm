byte_2F47E2:    dc.b   0,  0,$80,$7E,$82,$82,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_29DC   o
                dc.w sprite_8_16
                dc.w $7E7C
                dc.w $9500 ! ((grp_C1700 / 2) & $00FF)
                dc.w $9600 ! (((grp_C1700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C1700 / 2) >> 16)
                dc.w 2
