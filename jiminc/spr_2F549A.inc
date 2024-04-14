byte_2F549A:    dc.b   0,  1,$7B,$7E,$82,$86,$7E,$82,$7F,$82
                                        ; DATA XREF: ROM:off_2A94   o
                dc.w sprite_16_8
                dc.w $7981
                dc.w $9500 ! ((grp_DCAC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_DCAC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DCAC0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7E79
                dc.w $9500 ! ((grp_F4720 / 2) & $00FF)
                dc.w $9600 ! (((grp_F4720 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F4720 / 2) >> 16)
                dc.w 1
