byte_2FAE6C:    dc.b   0,  0,$81,$81,$81,$81,$81,$81,$82,$81
                                        ; DATA XREF: ROM:off_2E98   o
                dc.w sprite_8_8
                dc.w $7F7F
                dc.w $9500 ! ((grp_F7300 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7300 / 2) >> 16)
                dc.w 1
