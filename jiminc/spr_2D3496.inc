byte_2D3496:    dc.b   0,  0,$82,$83,$81,$85,$81,$84,$82,$84
                                        ; DATA XREF: ROM:00000FEC   o
                dc.w sprite_8_8
                dc.w $7C81
                dc.w $9500 ! ((grp_E4760 / 2) & $00FF)
                dc.w $9600 ! (((grp_E4760 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E4760 / 2) >> 16)
                dc.w 1
