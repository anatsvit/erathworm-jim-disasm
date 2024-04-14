byte_2F3E7C:    dc.b   0,  0,$8D,$81,$8E,$81,$8D,$81,$8E,$81
                                        ; DATA XREF: ROM:off_2898   o
                dc.w sprite_8_8
                dc.w $7C7F
                dc.w $9500 ! ((grp_F4020 / 2) & $00FF)
                dc.w $9600 ! (((grp_F4020 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F4020 / 2) >> 16)
                dc.w 1
