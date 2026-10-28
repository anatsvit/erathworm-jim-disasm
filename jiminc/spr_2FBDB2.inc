spr_andy_super_bubble_04:    dc.b   0,  0,$7E,$7F,$82,$82,$80,$80,$81,$80
                                        ; DATA XREF: ROM:frame_andy_super_bubble_04   o
                dc.w sprite_16_8
                dc.w $767D
                dc.w $9500 ! ((grp_DF340 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF340 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF340 / 2) >> 16)
                dc.w 2
