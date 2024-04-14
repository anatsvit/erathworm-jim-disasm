byte_2FF0A2:    dc.b   0,  0,$7C,$7E,$84,$82,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_3534   o
                dc.w sprite_16_8
                dc.w $7A7C
                dc.w $9500 ! ((grp_E0B40 / 2) & $00FF)
                dc.w $9600 ! (((grp_E0B40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E0B40 / 2) >> 16)
                dc.w 2
