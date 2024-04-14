byte_2F544C:    dc.b   0,  0,$7E,$81,$81,$82,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_2A88   o
                dc.w sprite_8_8
                dc.w $7C7F
                dc.w $9500 ! ((grp_F46E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F46E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F46E0 / 2) >> 16)
                dc.w 1
