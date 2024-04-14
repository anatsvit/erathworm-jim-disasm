byte_2FBEAA:    dc.b   0,  1,$77,$76,$8A,$8C,$80,$81,$81,$81
                                        ; DATA XREF: ROM:off_303C   o
                dc.w sprite_24_24
                dc.w $7574
                dc.w $9500 ! ((grp_1541E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_1541E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1541E0 / 2) >> 16)
                dc.w 9
                dc.w sprite_8_8
                dc.w $798C
                dc.w $9500 ! ((grp_F7AE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7AE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7AE0 / 2) >> 16)
                dc.w 1
