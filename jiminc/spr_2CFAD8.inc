byte_2CFAD8:    dc.b   0,  0,$7A,$7E,$84,$85,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_BF8   o
                dc.w sprite_16_16
                dc.w $787C
                dc.w $9500 ! ((grp_75000 / 2) & $00FF)
                dc.w $9600 ! (((grp_75000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_75000 / 2) >> 16)
                dc.w 4
