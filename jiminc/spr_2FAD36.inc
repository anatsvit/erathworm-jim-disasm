byte_2FAD36:    dc.b   0,  0,$7E,$7E,$83,$83,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_2E64   o
                dc.w sprite_16_16
                dc.w $7C7C
                dc.w $9500 ! ((grp_91A80 / 2) & $00FF)
                dc.w $9600 ! (((grp_91A80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_91A80 / 2) >> 16)
                dc.w 4
