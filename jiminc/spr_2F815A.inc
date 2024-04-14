byte_2F815A:    dc.b   0,  0,$7D,$8A,$84,$91,$81,$8D,$82,$8D
                                        ; DATA XREF: ROM:off_2C34   o
                dc.w sprite_8_8
                dc.w $7C8B
                dc.w $9500 ! ((grp_F5AC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F5AC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F5AC0 / 2) >> 16)
                dc.w 1
