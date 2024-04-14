byte_2F43EC:    dc.b   0,  0,$80,$80,$81,$80,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_2940   o
                dc.w sprite_8_8
                dc.w $7C7E
                dc.w $9500 ! ((grp_F37C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F37C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F37C0 / 2) >> 16)
                dc.w 1
