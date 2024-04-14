byte_2CE600:    dc.b   0,  0,$74,$73,$8D,$8E,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_AB8   o
                dc.w sprite_8_8
                dc.w $7D7D
                dc.w $9500 ! ((grp_E1C40 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1C40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1C40 / 2) >> 16)
                dc.w 1
