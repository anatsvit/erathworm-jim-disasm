byte_2EEF84:    dc.b   0,  0,$81,$88,$7E,$86,$7F,$87,$80,$87
                                        ; DATA XREF: ROM:off_2440   o
                dc.w sprite_8_8
                dc.w $7B84
                dc.w $9500 ! ((grp_F0C60 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0C60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0C60 / 2) >> 16)
                dc.w 1
