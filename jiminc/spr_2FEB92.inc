byte_2FEB92:    dc.b   0,  0,$7C,$85,$82,$8E,$7F,$89,$80,$89
                                        ; DATA XREF: ROM:off_34A4   o
                dc.w sprite_16_16
                dc.w $7A83
                dc.w $9500 ! ((grp_96200 / 2) & $00FF)
                dc.w $9600 ! (((grp_96200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_96200 / 2) >> 16)
                dc.w 4
