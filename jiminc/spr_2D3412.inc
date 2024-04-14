byte_2D3412:    dc.b   0,  0,$81,$83,$80,$84,$80,$83,$81,$83
                                        ; DATA XREF: ROM:off_FD4   o
                dc.w sprite_8_8
                dc.w $7F81
                dc.w $9500 ! ((grp_E4740 / 2) & $00FF)
                dc.w $9600 ! (((grp_E4740 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E4740 / 2) >> 16)
                dc.w 1
