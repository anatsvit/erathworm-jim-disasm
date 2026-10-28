spr_psycrow_front_24:    dc.b   0,  0,$80,$7D,$82,$83,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:frame_psycrow_front_24   o
                dc.w sprite_8_16
                dc.w $7D7B
                dc.w $9500 ! ((grp_C1640 / 2) & $00FF)
                dc.w $9600 ! (((grp_C1640 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C1640 / 2) >> 16)
                dc.w 2
