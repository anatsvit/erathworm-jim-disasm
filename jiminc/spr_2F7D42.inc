byte_2F7D42:    dc.b   0,  1,$7D,$87,$81,$8C,$7F,$89,$80,$89
                                        ; DATA XREF: ROM:off_2BC4   o
                dc.w sprite_16_8
                dc.w $7B85
                dc.w $9500 ! ((grp_DCE40 / 2) & $00FF)
                dc.w $9600 ! (((grp_DCE40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DCE40 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7B8D
                dc.w $9500 ! ((grp_F49E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F49E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F49E0 / 2) >> 16)
                dc.w 1
