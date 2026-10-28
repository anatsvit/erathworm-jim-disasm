spr_psycrow_16:    dc.b   0,  0,$7F,$7F,$81,$81,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:frame_psycrow_16   o
                dc.w sprite_8_8
                dc.w $7C7D
                dc.w $9500 ! ((grp_F3700 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3700 / 2) >> 16)
                dc.w 1
