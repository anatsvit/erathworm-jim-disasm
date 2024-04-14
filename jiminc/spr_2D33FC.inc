byte_2D33FC:    dc.b   0,  0,$80,$83,$7F,$84,$7F,$83,$80,$83
                                        ; DATA XREF: ROM:off_FD0   o
                dc.w sprite_8_8
                dc.w $7A81
                dc.w $9500 ! ((grp_E4720 / 2) & $00FF)
                dc.w $9600 ! (((grp_E4720 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E4720 / 2) >> 16)
                dc.w 1
