byte_2D351A:    dc.b   0,  0,$82,$82,$81,$83,$81,$82,$82,$82
                                        ; DATA XREF: ROM:off_1004   o
                dc.w sprite_8_8
                dc.w $7C80
                dc.w $9500 ! ((grp_E4780 / 2) & $00FF)
                dc.w $9600 ! (((grp_E4780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E4780 / 2) >> 16)
                dc.w 1
