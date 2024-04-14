byte_2F3B16:    dc.b   0,  0,$8F,$81,$94,$83,$91,$82,$92,$82
                                        ; DATA XREF: ROM:off_27FC   o
                dc.w sprite_16_8
                dc.w $787F
                dc.w $9500 ! ((grp_DC3C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_DC3C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DC3C0 / 2) >> 16)
                dc.w 2
