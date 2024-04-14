byte_2ECAFE:    dc.b   0,  0,$79,$7A,$85,$89,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_21BC   o
                dc.w sprite_16_16
                dc.w $7A7A
                dc.w $9500 ! ((grp_88480 / 2) & $00FF)
                dc.w $9600 ! (((grp_88480 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_88480 / 2) >> 16)
                dc.w 4
