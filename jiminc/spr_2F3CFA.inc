byte_2F3CFA:    dc.b   0,  0,$90,$83,$8D,$7F,$8E,$81,$8F,$81
                                        ; DATA XREF: ROM:off_2854   o
                dc.w sprite_8_8
                dc.w $7F81
                dc.w $9500 ! ((grp_F3EA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3EA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3EA0 / 2) >> 16)
                dc.w 1
