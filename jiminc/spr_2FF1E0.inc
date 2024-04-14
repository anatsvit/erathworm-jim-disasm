byte_2FF1E0:    dc.b   0,  0,$41,$52,$BC,$BF,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_3558   o
                dc.w sprite_8_8
                dc.w $7D7D
                dc.w $9500 ! ((grp_F8C20 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8C20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8C20 / 2) >> 16)
                dc.w 1
