byte_2ECC86:    dc.b   0,  0,$7A,$7A,$85,$89,$80,$81,$81,$81
                                        ; DATA XREF: ROM:off_21F4   o
                dc.w sprite_16_16
                dc.w $7B7A
                dc.w $9500 ! ((grp_87F80 / 2) & $00FF)
                dc.w $9600 ! (((grp_87F80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_87F80 / 2) >> 16)
                dc.w 4
