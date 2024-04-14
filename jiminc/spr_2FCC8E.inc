byte_2FCC8E:    dc.b   0,  0,$79,$7B,$84,$85,$7E,$80,$7F,$80
                                        ; DATA XREF: ROM:off_31FC   o
                dc.w sprite_16_16
                dc.w $7779
                dc.w $9500 ! ((grp_94680 / 2) & $00FF)
                dc.w $9600 ! (((grp_94680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94680 / 2) >> 16)
                dc.w 4
