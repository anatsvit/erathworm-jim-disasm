byte_2FEA8A:    dc.b   0,  0,$7E,$8D,$82,$8E,$80,$8D,$81,$8D
                                        ; DATA XREF: ROM:off_3474   o
                dc.w sprite_16_8
                dc.w $768B
                dc.w $9500 ! ((grp_E0A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_E0A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E0A00 / 2) >> 16)
                dc.w 2
