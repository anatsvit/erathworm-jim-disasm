byte_2F812E:    dc.b   0,  0,$7D,$89,$85,$90,$80,$8D,$81,$8D
                                        ; DATA XREF: ROM:off_2C2C   o
                dc.w sprite_8_8
                dc.w $7C8B
                dc.w $9500 ! ((grp_F5A80 / 2) & $00FF)
                dc.w $9600 ! (((grp_F5A80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F5A80 / 2) >> 16)
                dc.w 1
