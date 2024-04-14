byte_2F3DAA:    dc.b   0,  0,$7A,$7F,$85,$86,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_2874   o
                dc.w sprite_16_16
                dc.w $787D
                dc.w $9500 ! ((grp_8E300 / 2) & $00FF)
                dc.w $9600 ! (((grp_8E300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8E300 / 2) >> 16)
                dc.w 4
