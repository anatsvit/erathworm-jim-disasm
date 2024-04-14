byte_2CE57C:    dc.b   0,  0,$7F,$8F,$81,$8D,$80,$8E,$81,$8E
                                        ; DATA XREF: ROM:off_AA0   o
                dc.w sprite_8_8
                dc.w $7D8D
                dc.w $9500 ! ((grp_E1BC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1BC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1BC0 / 2) >> 16)
                dc.w 1
