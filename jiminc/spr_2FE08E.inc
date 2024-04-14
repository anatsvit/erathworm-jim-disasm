byte_2FE08E:    dc.b   0,  0,$80,$80,$7E,$7E,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_336C   o
                dc.w sprite_8_8
                dc.w $797E
                dc.w $9500 ! ((grp_F8880 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8880 / 2) >> 16)
                dc.w 1
