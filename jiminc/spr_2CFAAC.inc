byte_2CFAAC:    dc.b   0,  0,$76,$7E,$89,$82,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_BF0   o
                dc.w sprite_24_8
                dc.w $747C
                dc.w $9500 ! ((grp_183E80 / 2) & $00FF)
                dc.w $9600 ! (((grp_183E80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_183E80 / 2) >> 16)
                dc.w 3
