byte_2CE396:    dc.b   0,  0,$87,$87,$8E,$8A,$8A,$88,$8B,$88
                                        ; DATA XREF: ROM:off_A4C   o
                dc.w sprite_16_8
                dc.w $8585
                dc.w $9500 ! ((grp_C7400 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7400 / 2) >> 16)
                dc.w 2
