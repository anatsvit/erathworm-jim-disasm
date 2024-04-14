byte_2CE406:    dc.b   0,  0,$89,$85,$8E,$87,$8B,$86,$8C,$86
                                        ; DATA XREF: ROM:off_A5C   o
                dc.w sprite_16_8
                dc.w $8783
                dc.w $9500 ! ((grp_C7480 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7480 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7480 / 2) >> 16)
                dc.w 2
