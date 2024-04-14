byte_2D3320:    dc.b   0,  0,$7E,$83,$7F,$86,$7E,$84,$7F,$84
                                        ; DATA XREF: ROM:off_FA8   o
                dc.w sprite_8_8
                dc.w $7A81
                dc.w $9500 ! ((grp_E46E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E46E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E46E0 / 2) >> 16)
                dc.w 1
