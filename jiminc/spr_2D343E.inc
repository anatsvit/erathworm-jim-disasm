byte_2D343E:    dc.b   0,  0,$82,$82,$81,$83,$81,$82,$82,$82
                                        ; DATA XREF: ROM:off_FDC   o
                dc.w sprite_8_8
                dc.w $8080
                dc.w $9500 ! ((grp_E4740 / 2) & $00FF)
                dc.w $9600 ! (((grp_E4740 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E4740 / 2) >> 16)
                dc.w 1
