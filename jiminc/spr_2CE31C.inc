spr_rocket_flame_3_1:    dc.b   0,  0,$84,$8A,$8A,$8D,$87,$8B,$88,$8B
                                        ; DATA XREF: ROM:frame_rocket_flame_3_1   o
                dc.w sprite_16_8
                dc.w $8288
                dc.w $9500 ! ((grp_C7380 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7380 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7380 / 2) >> 16)
                dc.w 2
