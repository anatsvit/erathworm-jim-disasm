byte_2ECCBE:    dc.b   0,  0,$76,$77,$8A,$86,$80,$7E,$81,$7E
                                        ; DATA XREF: ROM:off_21FC   o
                dc.w sprite_24_24
                dc.w $7475
                dc.w $9500 ! ((grp_14B780 / 2) & $00FF)
                dc.w $9600 ! (((grp_14B780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_14B780 / 2) >> 16)
                dc.w 9
