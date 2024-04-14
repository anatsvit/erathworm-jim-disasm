byte_2EDF66:    dc.b   0,  0,$7E,$89,$87,$8F,$82,$8C,$83,$8C
                                        ; DATA XREF: ROM:off_2334   o
                dc.w sprite_16_8
                dc.w $7D89
                dc.w $9500 ! ((grp_D90C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_D90C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D90C0 / 2) >> 16)
                dc.w 2
