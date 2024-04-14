byte_2FAEC4:    dc.b   0,  0,$81,$7F,$7E,$7C,$7F,$7D,$80,$7D
                                        ; DATA XREF: ROM:off_2EA8   o
                dc.w sprite_8_8
                dc.w $7F7D
                dc.w $9500 ! ((grp_F7360 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7360 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7360 / 2) >> 16)
                dc.w 1
