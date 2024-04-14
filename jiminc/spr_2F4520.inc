byte_2F4520:    dc.b   0,  0,$81,$81,$80,$80,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_2978   o
                dc.w sprite_8_8
                dc.w $7B7F
                dc.w $9500 ! ((grp_F3980 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3980 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3980 / 2) >> 16)
                dc.w 1
