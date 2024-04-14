byte_2F3E24:    dc.b   0,  0,$8C,$81,$90,$82,$8E,$81,$8F,$81
                                        ; DATA XREF: ROM:off_2888   o
                dc.w sprite_16_8
                dc.w $757F
                dc.w $9500 ! ((grp_DC500 / 2) & $00FF)
                dc.w $9600 ! (((grp_DC500 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DC500 / 2) >> 16)
                dc.w 2
