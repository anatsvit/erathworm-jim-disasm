byte_2FF048:    dc.b   0,  1,$80,$81,$87,$85,$83,$83,$84,$83
                                        ; DATA XREF: ROM:off_3528   o
                dc.w sprite_16_8
                dc.w $7E7F
                dc.w $9500 ! ((grp_E0A80 / 2) & $00FF)
                dc.w $9600 ! (((grp_E0A80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E0A80 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8087
                dc.w $9500 ! ((grp_F90C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F90C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F90C0 / 2) >> 16)
                dc.w 1
