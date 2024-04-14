byte_2CC02E:    dc.b   0,  0,$7E,$8B,$81,$8E,$7F,$8C,$80,$8C
                                        ; DATA XREF: ROM:off_6C4   o
                dc.w sprite_8_8
                dc.w $7C89
                dc.w $9500 ! ((grp_E1060 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1060 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1060 / 2) >> 16)
                dc.w 1
