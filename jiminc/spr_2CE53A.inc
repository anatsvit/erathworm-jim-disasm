byte_2CE53A:    dc.b   0,  0,$80,$8E,$7F,$8C,$7F,$8D,$80,$8D
                                        ; DATA XREF: ROM:off_A94   o
                dc.w sprite_8_8
                dc.w $7E8C
                dc.w $9500 ! ((grp_E1B40 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1B40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1B40 / 2) >> 16)
                dc.w 1
