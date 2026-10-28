spr_rocket_flame_4_1:    dc.b   0,  0,$86,$89,$89,$8B,$87,$8A,$88,$8A
                                        ; DATA XREF: ROM:frame_rocket_flame_4_1   o
                dc.w sprite_8_8
                dc.w $8487
                dc.w $9500 ! ((grp_E1920 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1920 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1920 / 2) >> 16)
                dc.w 1
