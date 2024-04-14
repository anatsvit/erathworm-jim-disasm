byte_2CDC7A:    dc.b   0,  0,$81,$81,$7F,$7F,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_99C   o
                dc.w sprite_8_8
                dc.w $7F7F
                dc.w $9500 ! ((grp_E18C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E18C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E18C0 / 2) >> 16)
                dc.w 1
