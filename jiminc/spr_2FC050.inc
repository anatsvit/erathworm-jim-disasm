spr_andy_speed_bubble_03:    dc.b   0,  0,$80,$7F,$81,$83,$80,$81,$81,$81
                                        ; DATA XREF: ROM:frame_andy_speed_bubble_03   o
                dc.w sprite_8_16
                dc.w $7E7D
                dc.w $9500 ! ((grp_C4F80 / 2) & $00FF)
                dc.w $9600 ! (((grp_C4F80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C4F80 / 2) >> 16)
                dc.w 2
