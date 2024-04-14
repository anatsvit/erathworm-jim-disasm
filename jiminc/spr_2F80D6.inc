byte_2F80D6:    dc.b   0,  0,$7D,$8A,$85,$91,$80,$8D,$81,$8D
                                        ; DATA XREF: ROM:off_2C1C   o
                dc.w sprite_8_8
                dc.w $7C8A
                dc.w $9500 ! ((grp_F5A40 / 2) & $00FF)
                dc.w $9600 ! (((grp_F5A40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F5A40 / 2) >> 16)
                dc.w 1
