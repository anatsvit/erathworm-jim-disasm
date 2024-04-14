byte_2FF0B8:    dc.b   0,  0,$7A,$80,$84,$80,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_3538   o
                dc.w sprite_16_8
                dc.w $787E
                dc.w $9500 ! ((grp_E0AC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E0AC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E0AC0 / 2) >> 16)
                dc.w 2
