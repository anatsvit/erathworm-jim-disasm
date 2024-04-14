byte_2FD1C6:    dc.b   0,  1,$7C,$78,$83,$86,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_32B4   o
                dc.w sprite_8_24
                dc.w $7D76
                dc.w $9500 ! ((grp_1A0440 / 2) & $00FF)
                dc.w $9600 ! (((grp_1A0440 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1A0440 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_8
                dc.w $7576
                dc.w $9500 ! ((grp_F81A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F81A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F81A0 / 2) >> 16)
                dc.w 1
