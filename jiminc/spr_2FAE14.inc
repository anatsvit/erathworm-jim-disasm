spr_andy_bubble_10:    dc.b   0,  0,$80,$80,$81,$81,$80,$80,$81,$80
                                        ; DATA XREF: ROM:frame_andy_bubble_10   o
                dc.w sprite_8_8
                dc.w $7E7E
                dc.w $9500 ! ((grp_F7280 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7280 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7280 / 2) >> 16)
                dc.w 1
