byte_2CFD4C:    dc.b   0,  1,$7C,$7C,$82,$86,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_C50   o
                dc.w sprite_8_16
                dc.w $7A7A
                dc.w $9500 ! ((grp_B1700 / 2) & $00FF)
                dc.w $9600 ! (((grp_B1700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B1700 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $827F
                dc.w $9500 ! ((grp_E3080 / 2) & $00FF)
                dc.w $9600 ! (((grp_E3080 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E3080 / 2) >> 16)
                dc.w 1
