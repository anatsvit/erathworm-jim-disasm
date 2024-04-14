byte_2CFB1A:    dc.b   0,  0,$7A,$82,$84,$82,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_C04   o
                dc.w sprite_16_8
                dc.w $7880
                dc.w $9500 ! ((grp_C8900 / 2) & $00FF)
                dc.w $9600 ! (((grp_C8900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C8900 / 2) >> 16)
                dc.w 2
