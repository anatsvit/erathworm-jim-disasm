byte_2F3E0E:    dc.b   0,  0,$8C,$80,$90,$82,$8E,$81,$8F,$81
                                        ; DATA XREF: ROM:off_2884   o
                dc.w sprite_16_8
                dc.w $767E
                dc.w $9500 ! ((grp_DC4C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_DC4C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DC4C0 / 2) >> 16)
                dc.w 2
