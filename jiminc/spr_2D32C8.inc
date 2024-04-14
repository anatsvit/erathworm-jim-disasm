byte_2D32C8:    dc.b   0,  0,$7F,$83,$80,$86,$7F,$84,$80,$84
                                        ; DATA XREF: ROM:off_F98   o
                dc.w sprite_8_8
                dc.w $7B81
                dc.w $9500 ! ((grp_E46E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E46E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E46E0 / 2) >> 16)
                dc.w 1
