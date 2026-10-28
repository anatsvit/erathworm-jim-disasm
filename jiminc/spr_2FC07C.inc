spr_andy_speed_bubble_01:    dc.b   0,  0,$7F,$80,$81,$81,$80,$80,$81,$80
                                        ; DATA XREF: ROM:frame_andy_speed_bubble_01   o
                dc.w sprite_8_8
                dc.w $7C7E
                dc.w $9500 ! ((grp_F7B80 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7B80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7B80 / 2) >> 16)
                dc.w 1
