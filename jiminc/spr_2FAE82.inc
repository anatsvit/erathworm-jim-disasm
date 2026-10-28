spr_andy_bubble_00:    dc.b   0,  0,$81,$81,$80,$80,$80,$80,$81,$80
                                        ; DATA XREF: ROM:frame_andy_bubble_00   o
                dc.w sprite_8_8
                dc.w $7F7F
                dc.w $9500 ! ((grp_F7320 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7320 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7320 / 2) >> 16)
                dc.w 1
