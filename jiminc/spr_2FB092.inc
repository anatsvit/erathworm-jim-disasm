spr_andy_asteroid_23:    dc.b   0,  0,$7E,$7E,$7F,$7D,$7E,$7D,$7F,$7D
                                        ; DATA XREF: ROM:frame_andy_asteroid_23   o
                dc.w sprite_8_8
                dc.w $7C7C
                dc.w $9500 ! ((grp_F7600 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7600 / 2) >> 16)
                dc.w 1
