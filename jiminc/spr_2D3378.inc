byte_2D3378:    dc.b   0,  0,$81,$82,$80,$83,$80,$82,$81,$82
                                        ; DATA XREF: ROM:off_FB8   o
                dc.w sprite_8_8
                dc.w $7F80
                dc.w $9500 ! ((grp_E4700 / 2) & $00FF)
                dc.w $9600 ! (((grp_E4700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E4700 / 2) >> 16)
                dc.w 1
