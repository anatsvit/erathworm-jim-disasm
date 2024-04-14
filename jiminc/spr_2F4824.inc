byte_2F4824:    dc.b   0,  0,$80,$7E,$81,$82,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_29E8   o
                dc.w sprite_8_16
                dc.w $7E7C
                dc.w $9500 ! ((grp_C17C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C17C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C17C0 / 2) >> 16)
                dc.w 2
