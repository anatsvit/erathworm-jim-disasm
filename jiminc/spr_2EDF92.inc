byte_2EDF92:    dc.b   0,  0,$7E,$8A,$84,$8F,$81,$8C,$82,$8C
                                        ; DATA XREF: ROM:off_233C   o
                dc.w sprite_8_8
                dc.w $7D8A
                dc.w $9500 ! ((grp_F0580 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0580 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0580 / 2) >> 16)
                dc.w 1
