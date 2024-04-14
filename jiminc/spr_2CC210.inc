byte_2CC210:    dc.b   0,  0,$82,$82,$8E,$8E,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:off_708   o
                dc.w sprite_16_16
                dc.w $8080
                dc.w $9500 ! ((grp_72980 / 2) & $00FF)
                dc.w $9600 ! (((grp_72980 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_72980 / 2) >> 16)
                dc.w 4
