byte_2CDBDC:    dc.b   0,  0,$7A,$7D,$7E,$81,$7C,$7F,$7D,$7F
                                        ; DATA XREF: ROM:off_988   o
                dc.w sprite_8_8
                dc.w $787B
                dc.w $9500 ! ((grp_E1880 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1880 / 2) >> 16)
                dc.w 1
