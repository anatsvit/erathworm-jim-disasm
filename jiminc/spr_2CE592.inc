byte_2CE592:    dc.b   0,  0,$7F,$8E,$80,$8D,$7F,$8D,$80,$8D
                                        ; DATA XREF: ROM:off_AA4   o
                dc.w sprite_8_8
                dc.w $7D8C
                dc.w $9500 ! ((grp_E1BE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1BE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1BE0 / 2) >> 16)
                dc.w 1
