byte_2D3286:    dc.b   0,  0,$81,$82,$81,$84,$81,$83,$82,$83
                                        ; DATA XREF: ROM:off_F8C   o
                dc.w sprite_8_8
                dc.w $7F80
                dc.w $9500 ! ((grp_E46C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E46C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E46C0 / 2) >> 16)
                dc.w 1
