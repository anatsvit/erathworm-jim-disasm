byte_2CE348:    dc.b   0,  0,$86,$89,$8C,$8C,$89,$8A,$8A,$8A
                                        ; DATA XREF: ROM:off_A40   o
                dc.w sprite_16_8
                dc.w $8487
                dc.w $9500 ! ((grp_C73C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C73C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C73C0 / 2) >> 16)
                dc.w 2
