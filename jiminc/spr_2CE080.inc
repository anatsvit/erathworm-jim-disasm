byte_2CE080:    dc.b   0,  0,$82,$8B,$89,$8D,$85,$8C,$86,$8C
                                        ; DATA XREF: ROM:off_9E8   o
                dc.w sprite_16_8
                dc.w $7D89
                dc.w $9500 ! ((grp_C7F40 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7F40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7F40 / 2) >> 16)
                dc.w 2
