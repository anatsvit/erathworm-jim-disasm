byte_2D34EE:    dc.b   0,  0,$81,$83,$80,$84,$80,$83,$81,$83
                                        ; DATA XREF: ROM:off_FFC   o
                dc.w sprite_8_8
                dc.w $7B81
                dc.w $9500 ! ((grp_E4780 / 2) & $00FF)
                dc.w $9600 ! (((grp_E4780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E4780 / 2) >> 16)
                dc.w 1
