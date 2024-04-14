byte_2CE4B6:    dc.b   0,  0,$7F,$8A,$81,$8C,$80,$8B,$81,$8B
                                        ; DATA XREF: ROM:off_A7C   o
                dc.w sprite_8_8
                dc.w $7D88
                dc.w $9500 ! ((grp_E1A40 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1A40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1A40 / 2) >> 16)
                dc.w 1
