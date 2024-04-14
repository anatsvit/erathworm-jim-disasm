byte_2F3B9A:    dc.b   0,  0,$90,$82,$91,$81,$90,$81,$91,$81
                                        ; DATA XREF: ROM:off_2814   o
                dc.w sprite_8_8
                dc.w $7980
                dc.w $9500 ! ((grp_F3CC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3CC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3CC0 / 2) >> 16)
                dc.w 1
