byte_2CCE3C:    dc.b   0,  1,$7C,$7C,$84,$82,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_830   o
                dc.w sprite_16_8
                dc.w $7A7A
                dc.w $9500 ! ((grp_C7000 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7000 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7B82
                dc.w $9500 ! ((grp_E1780 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1780 / 2) >> 16)
                dc.w 1
