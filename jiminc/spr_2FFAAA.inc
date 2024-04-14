byte_2FFAAA:    dc.b   0,  0,$7F,$80,$80,$81,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_35C4   o
                dc.w sprite_8_8
                dc.w $7B7E
                dc.w $9500 ! ((grp_F9660 / 2) & $00FF)
                dc.w $9600 ! (((grp_F9660 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F9660 / 2) >> 16)
                dc.w 1
