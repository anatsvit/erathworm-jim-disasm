byte_2CDCE8:    dc.b   0,  0,$7E,$7E,$82,$81,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_9B0   o
                dc.w sprite_16_8
                dc.w $767C
                dc.w $9500 ! ((grp_C8200 / 2) & $00FF)
                dc.w $9600 ! (((grp_C8200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C8200 / 2) >> 16)
                dc.w 2
