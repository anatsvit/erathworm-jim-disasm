byte_2FCC78:    dc.b   0,  0,$79,$7A,$85,$85,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_31F8   o
                dc.w sprite_24_16
                dc.w $7678
                dc.w $9500 ! ((grp_16CE40 / 2) & $00FF)
                dc.w $9600 ! (((grp_16CE40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16CE40 / 2) >> 16)
                dc.w 6
