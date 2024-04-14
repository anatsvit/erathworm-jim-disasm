byte_2F44C8:    dc.b   0,  0,$81,$80,$80,$7F,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_2968   o
                dc.w sprite_8_8
                dc.w $7B7E
                dc.w $9500 ! ((grp_F3900 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3900 / 2) >> 16)
                dc.w 1
