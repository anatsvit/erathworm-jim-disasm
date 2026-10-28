spr_rocket_flame_5_1:    dc.b   0,  0,$87,$87,$8B,$89,$89,$88,$8A,$88
                                        ; DATA XREF: ROM:frame_rocket_flame_5_1   o
                dc.w sprite_8_8
                dc.w $8585
                dc.w $9500 ! ((grp_E1960 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1960 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1960 / 2) >> 16)
                dc.w 1
