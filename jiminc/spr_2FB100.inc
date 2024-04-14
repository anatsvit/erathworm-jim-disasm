byte_2FB100:    dc.b   0,  0,$7D,$7D,$80,$7F,$7E,$7E,$7F,$7E
                                        ; DATA XREF: ROM:off_2F10   o
                dc.w sprite_8_8
                dc.w $7B7B
                dc.w $9500 ! ((grp_F76A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F76A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F76A0 / 2) >> 16)
                dc.w 1
