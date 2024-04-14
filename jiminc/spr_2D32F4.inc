byte_2D32F4:    dc.b   0,  0,$80,$82,$81,$85,$80,$83,$81,$83
                                        ; DATA XREF: ROM:off_FA0   o
                dc.w sprite_8_8
                dc.w $7C80
                dc.w $9500 ! ((grp_E46E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E46E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E46E0 / 2) >> 16)
                dc.w 1
