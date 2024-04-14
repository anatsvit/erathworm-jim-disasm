byte_2D329C:    dc.b   0,  0,$80,$82,$80,$84,$80,$83,$81,$83
                                        ; DATA XREF: ROM:off_F90   o
                dc.w sprite_8_8
                dc.w $7E80
                dc.w $9500 ! ((grp_E46C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E46C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E46C0 / 2) >> 16)
                dc.w 1
