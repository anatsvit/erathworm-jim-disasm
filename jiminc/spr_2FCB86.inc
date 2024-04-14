byte_2FCB86:    dc.b   0,  0,$7C,$7B,$83,$84,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_31CC   o
                dc.w sprite_16_16
                dc.w $7A79
                dc.w $9500 ! ((grp_94300 / 2) & $00FF)
                dc.w $9600 ! (((grp_94300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94300 / 2) >> 16)
                dc.w 4
