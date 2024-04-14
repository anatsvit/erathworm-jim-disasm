byte_2FE8AC:    dc.b   0,  1,$67,$87,$9B,$8F,$7E,$87,$7F,$87
                                        ; DATA XREF: ROM:off_3440   o
                dc.w sprite_32_24
                dc.w $7E7E
                dc.w $9500 ! ((grp_13B940 / 2) & $00FF)
                dc.w $9600 ! (((grp_13B940 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_13B940 / 2) >> 16)
                dc.w $C
                dc.w sprite_32_16
                dc.w $5F85
                dc.w $9500 ! ((grp_5A000 / 2) & $00FF)
                dc.w $9600 ! (((grp_5A000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_5A000 / 2) >> 16)
                dc.w 8
