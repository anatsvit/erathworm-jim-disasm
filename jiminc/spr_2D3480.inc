byte_2D3480:    dc.b   0,  0,$81,$83,$80,$85,$80,$84,$81,$84
                                        ; DATA XREF: ROM:off_FE8   o
                dc.w sprite_8_8
                dc.w $7B81
                dc.w $9500 ! ((grp_E4760 / 2) & $00FF)
                dc.w $9600 ! (((grp_E4760 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E4760 / 2) >> 16)
                dc.w 1
