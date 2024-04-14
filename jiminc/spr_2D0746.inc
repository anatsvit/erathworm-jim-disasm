byte_2D0746:    dc.b   0,  0,$7E,$80,$81,$80,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_D74   o
                dc.w sprite_8_8
                dc.w $7C7E
                dc.w $9500 ! ((grp_E3340 / 2) & $00FF)
                dc.w $9600 ! (((grp_E3340 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E3340 / 2) >> 16)
                dc.w 1
