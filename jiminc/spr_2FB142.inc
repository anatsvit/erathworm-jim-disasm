byte_2FB142:    dc.b   0,  0,$7C,$7D,$81,$80,$7E,$7E,$7F,$7E
                                        ; DATA XREF: ROM:off_2F1C   o
                dc.w sprite_16_8
                dc.w $7A7B
                dc.w $9500 ! ((grp_DF040 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF040 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF040 / 2) >> 16)
                dc.w 2
