byte_2F8102:    dc.b   0,  0,$79,$89,$87,$90,$80,$8C,$81,$8C
                                        ; DATA XREF: ROM:off_2C24   o
                dc.w sprite_16_8
                dc.w $798A
                dc.w $9500 ! ((grp_DD780 / 2) & $00FF)
                dc.w $9600 ! (((grp_DD780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DD780 / 2) >> 16)
                dc.w 2
