byte_2ECBA4:    dc.b   0,  0,$79,$7A,$88,$85,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_21D8   o
                dc.w sprite_16_16
                dc.w $797A
                dc.w $9500 ! ((grp_87F00 / 2) & $00FF)
                dc.w $9600 ! (((grp_87F00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_87F00 / 2) >> 16)
                dc.w 4
