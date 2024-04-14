byte_2CFEA8:    dc.b   0,  0,$7A,$7B,$84,$85,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_C80   o
                dc.w sprite_16_16
                dc.w $7879
                dc.w $9500 ! ((grp_75900 / 2) & $00FF)
                dc.w $9600 ! (((grp_75900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_75900 / 2) >> 16)
                dc.w 4
