byte_2ECCD4:    dc.b   0,  2,$72,$7A,$8C,$89,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_2200   o
                dc.w sprite_16_16
                dc.w $8080
                dc.w $9500 ! ((grp_88000 / 2) & $00FF)
                dc.w $9600 ! (((grp_88000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_88000 / 2) >> 16)
                dc.w 4
                dc.w sprite_32_8
                dc.w $7078
                dc.w $9500 ! ((grp_9D600 / 2) & $00FF)
                dc.w $9600 ! (((grp_9D600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_9D600 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $7081
                dc.w $9500 ! ((grp_EFC00 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFC00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFC00 / 2) >> 16)
                dc.w 1
