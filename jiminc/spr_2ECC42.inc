byte_2ECC42:    dc.b   0,  1,$79,$7A,$87,$89,$80,$81,$81,$81
                                        ; DATA XREF: ROM:off_21EC   o
                dc.w sprite_16_8
                dc.w $777A
                dc.w $9500 ! ((grp_D8240 / 2) & $00FF)
                dc.w $9600 ! (((grp_D8240 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D8240 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8082
                dc.w $9500 ! ((grp_EFBA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFBA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFBA0 / 2) >> 16)
                dc.w 1
