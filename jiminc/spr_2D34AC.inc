byte_2D34AC:    dc.b   0,  0,$82,$82,$81,$84,$81,$83,$82,$83
                                        ; DATA XREF: ROM:off_FF0   o
                dc.w sprite_8_8
                dc.w $7C80
                dc.w $9500 ! ((grp_E4760 / 2) & $00FF)
                dc.w $9600 ! (((grp_E4760 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E4760 / 2) >> 16)
                dc.w 1
