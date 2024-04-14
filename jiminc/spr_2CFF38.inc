byte_2CFF38:    dc.b   0,  0,$6F,$49,$92,$6A,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_C98   o
                dc.w sprite_8_8
                dc.w $7D7D
                dc.w $9500 ! ((grp_E2D60 / 2) & $00FF)
                dc.w $9600 ! (((grp_E2D60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E2D60 / 2) >> 16)
                dc.w 1
