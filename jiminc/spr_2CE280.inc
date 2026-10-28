spr_rocket_flame_1_1:    dc.b   0,  0,$81,$8B,$84,$8F,$82,$8D,$83,$8D
                                        ; DATA XREF: ROM:frame_rocket_flame_1_1   o
                dc.w sprite_8_16
                dc.w $7F89
                dc.w $9500 ! ((grp_B0440 / 2) & $00FF)
                dc.w $9600 ! (((grp_B0440 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B0440 / 2) >> 16)
                dc.w 2
