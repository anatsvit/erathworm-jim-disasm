byte_2FEAF8:    dc.b   0,  0,$7E,$8A,$81,$8D,$7F,$8B,$80,$8B
                                        ; DATA XREF: ROM:off_3488   o
                dc.w sprite_8_8
                dc.w $7C88
                dc.w $9500 ! ((grp_F8FC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8FC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8FC0 / 2) >> 16)
                dc.w 1
