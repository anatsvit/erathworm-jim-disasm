byte_2D33D0:    dc.b   0,  0,$82,$82,$81,$83,$81,$82,$82,$82
                                        ; DATA XREF: ROM:off_FC8   o
                dc.w sprite_8_8
                dc.w $7C80
                dc.w $9500 ! ((grp_E4720 / 2) & $00FF)
                dc.w $9600 ! (((grp_E4720 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E4720 / 2) >> 16)
                dc.w 1
