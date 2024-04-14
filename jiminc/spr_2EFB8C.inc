byte_2EFB8C:    dc.b   0,  0,$7F,$80,$81,$81,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_2568   o
                dc.w sprite_8_8
                dc.w $7D7E
                dc.w $9500 ! ((grp_F0DC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0DC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0DC0 / 2) >> 16)
                dc.w 1
