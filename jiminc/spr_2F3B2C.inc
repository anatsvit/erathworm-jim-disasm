byte_2F3B2C:    dc.b   0,  0,$8F,$81,$93,$82,$91,$81,$92,$81
                                        ; DATA XREF: ROM:off_2800   o
                dc.w sprite_16_8
                dc.w $727F
                dc.w $9500 ! ((grp_DC400 / 2) & $00FF)
                dc.w $9600 ! (((grp_DC400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DC400 / 2) >> 16)
                dc.w 2
