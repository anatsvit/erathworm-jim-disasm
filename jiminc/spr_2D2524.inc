byte_2D2524:    dc.b   0,  0,$5C,$4A,$A3,$73,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_ED8   o
                dc.w sprite_8_8
                dc.w $7C7C
                dc.w $9500 ! ((grp_E4160 / 2) & $00FF)
                dc.w $9600 ! (((grp_E4160 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E4160 / 2) >> 16)
                dc.w 1
