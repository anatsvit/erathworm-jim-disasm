spr_andy_bubble_14:    dc.b   0,  0,$80,$7F,$81,$81,$80,$80,$81,$80
                                        ; DATA XREF: ROM:frame_andy_bubble_14   o
                dc.w sprite_8_8
                dc.w $7E7D
                dc.w $9500 ! ((grp_F7240 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7240 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7240 / 2) >> 16)
                dc.w 1
