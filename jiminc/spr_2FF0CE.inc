byte_2FF0CE:    dc.b   0,  0,$7C,$7F,$84,$81,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_353C   o
                dc.w sprite_16_8
                dc.w $7A7D
                dc.w $9500 ! ((grp_E0B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_E0B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E0B00 / 2) >> 16)
                dc.w 2
