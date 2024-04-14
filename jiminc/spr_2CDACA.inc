byte_2CDACA:    dc.b   0,  0,$79,$7B,$84,$82,$7E,$7E,$7F,$7E
                                        ; DATA XREF: ROM:off_96C   o
                dc.w sprite_16_16
                dc.w $7775
                dc.w $9500 ! ((grp_73200 / 2) & $00FF)
                dc.w $9600 ! (((grp_73200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_73200 / 2) >> 16)
                dc.w 4
