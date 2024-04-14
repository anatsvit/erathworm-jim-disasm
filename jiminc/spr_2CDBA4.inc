byte_2CDBA4:    dc.b   0,  0,$81,$7C,$83,$80,$82,$7E,$83,$7E
                                        ; DATA XREF: ROM:off_980   o
                dc.w sprite_8_16
                dc.w $7F7A
                dc.w $9500 ! ((grp_B0300 / 2) & $00FF)
                dc.w $9600 ! (((grp_B0300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B0300 / 2) >> 16)
                dc.w 2
