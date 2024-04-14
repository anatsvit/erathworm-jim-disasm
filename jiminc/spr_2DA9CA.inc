byte_2DA9CA:    dc.b   0,  0,$80,$70,$8C,$87,$86,$7B,$87,$7F
                                        ; DATA XREF: ROM:off_14DC   o
                dc.w sprite_16_32
                dc.w $7E6E
                dc.w $9500 ! ((grp_60200 / 2) & $00FF)
                dc.w $9600 ! (((grp_60200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_60200 / 2) >> 16)
                dc.w 8
