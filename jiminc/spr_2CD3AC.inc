byte_2CD3AC:    dc.b   0,  2,$8A,$79,$99,$89,$87,$98,$88,$98
                                        ; DATA XREF: ROM:off_8A8   o
                dc.w sprite_24_16
                dc.w $887A
                dc.w $9500 ! ((grp_156880 / 2) & $00FF)
                dc.w $9600 ! (((grp_156880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_156880 / 2) >> 16)
                dc.w 6
                dc.w sprite_16_8
                dc.w $808A
                dc.w $9500 ! ((grp_C7940 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7940 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7940 / 2) >> 16)
                dc.w 2
                dc.w sprite_16_8
                dc.w $9072
                dc.w $9500 ! ((grp_C7980 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7980 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7980 / 2) >> 16)
                dc.w 2
