byte_2FEAE2:    dc.b   0,  0,$7E,$8C,$82,$8D,$80,$8C,$81,$8C
                                        ; DATA XREF: ROM:off_3484   o
                dc.w sprite_16_8
                dc.w $778A
                dc.w $9500 ! ((grp_E0840 / 2) & $00FF)
                dc.w $9600 ! (((grp_E0840 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E0840 / 2) >> 16)
                dc.w 2
