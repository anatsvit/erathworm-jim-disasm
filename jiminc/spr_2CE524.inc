byte_2CE524:    dc.b   0,  0,$81,$8E,$7F,$8C,$80,$8D,$81,$8D
                                        ; DATA XREF: ROM:off_A90   o
                dc.w sprite_8_8
                dc.w $7F8C
                dc.w $9500 ! ((grp_E1B20 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1B20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1B20 / 2) >> 16)
                dc.w 1
