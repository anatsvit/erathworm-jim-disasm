byte_2F5390:    dc.b   0,  0,$61,$9E,$65,$9F,$63,$9E,$64,$9E
                                        ; DATA XREF: ROM:off_2A68   o
                dc.w sprite_16_8
                dc.w $599C
                dc.w $9500 ! ((grp_DC980 / 2) & $00FF)
                dc.w $9600 ! (((grp_DC980 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DC980 / 2) >> 16)
                dc.w 2
