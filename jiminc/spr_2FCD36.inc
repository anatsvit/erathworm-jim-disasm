byte_2FCD36:    dc.b   0,  0,$7B,$7B,$85,$84,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_3214   o
                dc.w sprite_16_16
                dc.w $7979
                dc.w $9500 ! ((grp_94880 / 2) & $00FF)
                dc.w $9600 ! (((grp_94880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94880 / 2) >> 16)
                dc.w 4
