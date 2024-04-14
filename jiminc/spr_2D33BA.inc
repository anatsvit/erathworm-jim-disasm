byte_2D33BA:    dc.b   0,  0,$82,$83,$81,$84,$81,$83,$82,$83
                                        ; DATA XREF: ROM:00000FC4   o
                dc.w sprite_8_8
                dc.w $7C81
                dc.w $9500 ! ((grp_E4720 / 2) & $00FF)
                dc.w $9600 ! (((grp_E4720 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E4720 / 2) >> 16)
                dc.w 1
