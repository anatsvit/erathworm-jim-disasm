byte_2CC044:    dc.b   0,  0,$7A,$84,$85,$8F,$7F,$89,$80,$89
                                        ; DATA XREF: ROM:off_6C8   o
                dc.w sprite_16_16
                dc.w $7882
                dc.w $9500 ! ((grp_72780 / 2) & $00FF)
                dc.w $9600 ! (((grp_72780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_72780 / 2) >> 16)
                dc.w 4
