byte_2CE4CC:    dc.b   0,  0,$7F,$8B,$81,$8C,$80,$8B,$81,$8B
                                        ; DATA XREF: ROM:off_A80   o
                dc.w sprite_8_8
                dc.w $7D89
                dc.w $9500 ! ((grp_E1A60 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1A60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1A60 / 2) >> 16)
                dc.w 1
