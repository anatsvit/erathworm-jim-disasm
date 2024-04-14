byte_2CE432:    dc.b   0,  0,$7B,$85,$85,$8D,$80,$89,$81,$89
                                        ; DATA XREF: ROM:off_A64   o
                dc.w sprite_16_16
                dc.w $7983
                dc.w $9500 ! ((grp_73780 / 2) & $00FF)
                dc.w $9600 ! (((grp_73780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_73780 / 2) >> 16)
                dc.w 4
