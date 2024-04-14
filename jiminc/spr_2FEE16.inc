byte_2FEE16:    dc.b   0,  0,$80,$71,$82,$88,$81,$7C,$82,$7C
                                        ; DATA XREF: ROM:off_34F4   o
                dc.w sprite_8_32
                dc.w $7E6F
                dc.w $9500 ! ((grp_AFC00 / 2) & $00FF)
                dc.w $9600 ! (((grp_AFC00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_AFC00 / 2) >> 16)
                dc.w 4
