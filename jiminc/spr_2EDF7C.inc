byte_2EDF7C:    dc.b   0,  0,$7E,$88,$86,$8F,$82,$8B,$83,$8B
                                        ; DATA XREF: ROM:off_2338   o
                dc.w sprite_16_8
                dc.w $7D88
                dc.w $9500 ! ((grp_D9100 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9100 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9100 / 2) >> 16)
                dc.w 2
