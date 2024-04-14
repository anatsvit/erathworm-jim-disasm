byte_2FCB44:    dc.b   0,  0,$79,$7B,$86,$84,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_31C0   o
                dc.w sprite_24_16
                dc.w $7479
                dc.w $9500 ! ((grp_16CA80 / 2) & $00FF)
                dc.w $9600 ! (((grp_16CA80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16CA80 / 2) >> 16)
                dc.w 6
