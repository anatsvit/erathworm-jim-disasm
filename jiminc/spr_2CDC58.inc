byte_2CDC58:    dc.b   0,  1,$7E,$7E,$83,$82,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_998   o
                dc.w sprite_16_8
                dc.w $7C7C
                dc.w $9500 ! ((grp_C7300 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7300 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7C84
                dc.w $9500 ! ((grp_E1760 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1760 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1760 / 2) >> 16)
                dc.w 1
