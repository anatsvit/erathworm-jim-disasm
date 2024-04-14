byte_2CDAA8:    dc.b   0,  1,$7A,$7C,$86,$82,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_968   o
                dc.w sprite_16_8
                dc.w $787D
                dc.w $9500 ! ((grp_C7240 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7240 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7240 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7A75
                dc.w $9500 ! ((grp_E1840 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1840 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1840 / 2) >> 16)
                dc.w 1
