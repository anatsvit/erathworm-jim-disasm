byte_2F3F42:    dc.b   0,  0,$8F,$82,$8D,$80,$8E,$81,$8F,$81
                                        ; DATA XREF: ROM:off_28BC   o
                dc.w sprite_8_8
                dc.w $7F80
                dc.w $9500 ! ((grp_F4140 / 2) & $00FF)
                dc.w $9600 ! (((grp_F4140 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F4140 / 2) >> 16)
                dc.w 1
