byte_2CC4F4:    dc.b   0,  0,$82,$8E,$86,$94,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:off_770   o
                dc.w sprite_8_16
                dc.w $808C
                dc.w $9500 ! ((grp_AFD80 / 2) & $00FF)
                dc.w $9600 ! (((grp_AFD80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_AFD80 / 2) >> 16)
                dc.w 2
