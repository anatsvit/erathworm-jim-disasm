byte_2F3F2C:    dc.b   0,  0,$8E,$82,$8D,$80,$8D,$81,$8E,$81
                                        ; DATA XREF: ROM:off_28B8   o
                dc.w sprite_8_8
                dc.w $7F80
                dc.w $9500 ! ((grp_F4120 / 2) & $00FF)
                dc.w $9600 ! (((grp_F4120 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F4120 / 2) >> 16)
                dc.w 1
