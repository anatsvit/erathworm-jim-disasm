byte_2CF994:    dc.b   0,  0,$7F,$79,$7F,$8A,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_BC8   o
                dc.w sprite_8_24
                dc.w $7D77
                dc.w $9500 ! ((grp_192B20 / 2) & $00FF)
                dc.w $9600 ! (((grp_192B20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_192B20 / 2) >> 16)
                dc.w 3
