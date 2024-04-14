byte_2FCB70:    dc.b   0,  0,$7A,$7B,$84,$84,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_31C8   o
                dc.w sprite_16_16
                dc.w $7879
                dc.w $9500 ! ((grp_94280 / 2) & $00FF)
                dc.w $9600 ! (((grp_94280 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94280 / 2) >> 16)
                dc.w 4
