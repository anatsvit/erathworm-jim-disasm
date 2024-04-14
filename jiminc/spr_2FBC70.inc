byte_2FBC70:    dc.b   0,  0,$7B,$7C,$89,$87,$82,$81,$83,$81
                                        ; DATA XREF: ROM:off_2FE8   o
                dc.w sprite_24_16
                dc.w $777A
                dc.w $9500 ! ((grp_16B580 / 2) & $00FF)
                dc.w $9600 ! (((grp_16B580 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16B580 / 2) >> 16)
                dc.w 6
