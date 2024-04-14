byte_2F4352:    dc.b   0,  0,$7F,$7F,$81,$81,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_2924   o
                dc.w sprite_8_8
                dc.w $7C7D
                dc.w $9500 ! ((grp_F36E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F36E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F36E0 / 2) >> 16)
                dc.w 1
