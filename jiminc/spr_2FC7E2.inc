byte_2FC7E2:    dc.b   0,  0,$79,$59,$89,$8B,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_3134   o
                dc.w sprite_8_8
                dc.w $7D7D
                dc.w $9500 ! ((grp_F7F80 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7F80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7F80 / 2) >> 16)
                dc.w 1
