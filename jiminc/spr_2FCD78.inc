byte_2FCD78:    dc.b   0,  0,$7A,$7A,$85,$84,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_3220   o
                dc.w sprite_16_16
                dc.w $7878
                dc.w $9500 ! ((grp_94A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_94A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94A00 / 2) >> 16)
                dc.w 4
