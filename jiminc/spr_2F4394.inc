byte_2F4394:    dc.b   0,  0,$80,$7F,$81,$81,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_2930   o
                dc.w sprite_8_8
                dc.w $7C7D
                dc.w $9500 ! ((grp_F3740 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3740 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3740 / 2) >> 16)
                dc.w 1
