byte_2FE0D0:    dc.b   0,  0,$7E,$7D,$81,$80,$7F,$7E,$80,$7E
                                        ; DATA XREF: ROM:off_3378   o
                dc.w sprite_8_8
                dc.w $7C7B
                dc.w $9500 ! ((grp_F88E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F88E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F88E0 / 2) >> 16)
                dc.w 1
