byte_2FEB24:    dc.b   0,  0,$7E,$8A,$81,$8D,$7F,$8B,$80,$8B
                                        ; DATA XREF: ROM:off_3490   o
                dc.w sprite_8_8
                dc.w $7C88
                dc.w $9500 ! ((grp_F9000 / 2) & $00FF)
                dc.w $9600 ! (((grp_F9000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F9000 / 2) >> 16)
                dc.w 1
