spr_andy_speed_bubble_16:    dc.b   0,  0,$79,$7C,$86,$86,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:frame_andy_speed_bubble_16   o
                dc.w sprite_24_16
                dc.w $757A
                dc.w $9500 ! ((grp_16B7C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_16B7C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16B7C0 / 2) >> 16)
                dc.w 6
