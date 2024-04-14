byte_2E9B5C:    dc.b   0,  0,$7D,$7C,$81,$82,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_1EA8   o
                dc.w sprite_8_16
                dc.w $7B7A
                dc.w $9500 ! ((grp_BD6C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_BD6C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_BD6C0 / 2) >> 16)
                dc.w 2
