spr_chicken_boss_part_12:    dc.b   0,  0,$7E,$72,$80,$8E,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:frame_chicken_boss_part_12   o
                dc.w sprite_8_32
                dc.w $7C71
                dc.w $9500 ! ((grp_A3680 / 2) & $00FF)
                dc.w $9600 ! (((grp_A3680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A3680 / 2) >> 16)
                dc.w 4
