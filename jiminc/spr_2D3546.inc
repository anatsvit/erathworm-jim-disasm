byte_2D3546:    dc.b   0,  0,$80,$83,$7F,$84,$7F,$83,$80,$83
                                        ; DATA XREF: ROM:off_100C   o
                dc.w sprite_8_8
                dc.w $7A81
                dc.w $9500 ! ((grp_E4780 / 2) & $00FF)
                dc.w $9600 ! (((grp_E4780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E4780 / 2) >> 16)
                dc.w 1
