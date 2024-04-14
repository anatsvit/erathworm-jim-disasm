byte_2F3B58:    dc.b   0,  0,$8F,$81,$92,$82,$90,$81,$91,$81
                                        ; DATA XREF: ROM:off_2808   o
                dc.w sprite_8_8
                dc.w $7A7F
                dc.w $9500 ! ((grp_F3C60 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3C60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3C60 / 2) >> 16)
                dc.w 1
