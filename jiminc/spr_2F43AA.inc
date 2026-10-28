spr_psycrow_13:    dc.b   0,  0,$80,$80,$81,$81,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:frame_psycrow_13   o
                dc.w sprite_8_8
                dc.w $7C7E
                dc.w $9500 ! ((grp_F3760 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3760 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3760 / 2) >> 16)
                dc.w 1
