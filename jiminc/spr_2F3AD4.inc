byte_2F3AD4:    dc.b   0,  0,$8E,$7F,$99,$85,$93,$82,$94,$82
                                        ; DATA XREF: ROM:off_27F0   o
                dc.w sprite_16_16
                dc.w $737D
                dc.w $9500 ! ((grp_8E180 / 2) & $00FF)
                dc.w $9600 ! (((grp_8E180 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8E180 / 2) >> 16)
                dc.w 4
