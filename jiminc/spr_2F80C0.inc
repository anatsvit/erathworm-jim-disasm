byte_2F80C0:    dc.b   0,  0,$7C,$89,$84,$93,$80,$8D,$81,$8D
                                        ; DATA XREF: ROM:off_2C18   o
                dc.w sprite_8_8
                dc.w $7C8A
                dc.w $9500 ! ((grp_F5A20 / 2) & $00FF)
                dc.w $9600 ! (((grp_F5A20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F5A20 / 2) >> 16)
                dc.w 1
