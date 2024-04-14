byte_2FAF5E:    dc.b   0,  0,$80,$7F,$7E,$7D,$7F,$7E,$80,$7E
                                        ; DATA XREF: ROM:off_2EC4   o
                dc.w sprite_8_8
                dc.w $7E7D
                dc.w $9500 ! ((grp_F7440 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7440 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7440 / 2) >> 16)
                dc.w 1
