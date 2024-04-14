byte_2F8072:    dc.b   0,  0,$79,$7C,$8A,$82,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_2C0C   o
                dc.w sprite_24_8
                dc.w $757C
                dc.w $9500 ! ((grp_18F340 / 2) & $00FF)
                dc.w $9600 ! (((grp_18F340 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_18F340 / 2) >> 16)
                dc.w 3
