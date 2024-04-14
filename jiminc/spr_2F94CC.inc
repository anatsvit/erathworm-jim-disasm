byte_2F94CC:    dc.b   0,  0,$7F,$86,$82,$8E,$80,$8A,$81,$8A
                                        ; DATA XREF: ROM:off_2D40   o
                dc.w sprite_8_16
                dc.w $7D84
                dc.w $9500 ! ((grp_C4180 / 2) & $00FF)
                dc.w $9600 ! (((grp_C4180 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C4180 / 2) >> 16)
                dc.w 2
