byte_2EF0F8:    dc.b   0,  0,$7C,$7C,$84,$85,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_2470   o
                dc.w sprite_16_16
                dc.w $7A7A
                dc.w $9500 ! ((grp_8A300 / 2) & $00FF)
                dc.w $9600 ! (((grp_8A300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8A300 / 2) >> 16)
                dc.w 4
