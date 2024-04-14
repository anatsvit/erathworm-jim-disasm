byte_2FCC4C:    dc.b   0,  0,$7B,$7B,$84,$84,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_31F0   o
                dc.w sprite_16_16
                dc.w $7979
                dc.w $9500 ! ((grp_94580 / 2) & $00FF)
                dc.w $9600 ! (((grp_94580 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94580 / 2) >> 16)
                dc.w 4
