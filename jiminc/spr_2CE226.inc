byte_2CE226:    dc.b   0,  0,$7E,$8B,$82,$91,$80,$8E,$81,$8E
                                        ; DATA XREF: ROM:off_A14   o
                dc.w sprite_8_16
                dc.w $7C89
                dc.w $9500 ! ((grp_B0400 / 2) & $00FF)
                dc.w $9600 ! (((grp_B0400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B0400 / 2) >> 16)
                dc.w 2
