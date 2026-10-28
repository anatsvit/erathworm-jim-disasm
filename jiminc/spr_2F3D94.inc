spr_psycrow_flame_00:    dc.b   0,  0,$90,$82,$8C,$7E,$8E,$80,$8F,$80
                                        ; DATA XREF: ROM:frame_psycrow_flame_00   o
                dc.w sprite_8_8
                dc.w $8080
                dc.w $9500 ! ((grp_F3F80 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3F80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3F80 / 2) >> 16)
                dc.w 1
