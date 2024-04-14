byte_2CCE26:    dc.b   0,  0,$7E,$7B,$82,$84,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_82C   o
                dc.w sprite_8_16
                dc.w $7D78
                dc.w $9500 ! ((grp_B0280 / 2) & $00FF)
                dc.w $9600 ! (((grp_B0280 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B0280 / 2) >> 16)
                dc.w 2
