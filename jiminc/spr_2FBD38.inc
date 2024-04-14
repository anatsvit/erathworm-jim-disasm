byte_2FBD38:    dc.b   0,  0,$7F,$80,$85,$85,$82,$82,$83,$82
                                        ; DATA XREF: ROM:off_3008   o
                dc.w sprite_16_16
                dc.w $7D7E
                dc.w $9500 ! ((grp_92300 / 2) & $00FF)
                dc.w $9600 ! (((grp_92300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_92300 / 2) >> 16)
                dc.w 4
