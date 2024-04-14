byte_2D05B0:    dc.b   0,  1,$7C,$7C,$82,$84,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_D40   o
                dc.w sprite_8_16
                dc.w $7D79
                dc.w $9500 ! ((grp_B18C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_B18C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B18C0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $757F
                dc.w $9500 ! ((grp_E3380 / 2) & $00FF)
                dc.w $9600 ! (((grp_E3380 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E3380 / 2) >> 16)
                dc.w 1
