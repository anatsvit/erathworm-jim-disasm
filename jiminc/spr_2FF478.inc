byte_2FF478:    dc.b   0,  0,$20,$80,$1E,$7E,$1F,$7F,$20,$7F
                                        ; DATA XREF: ROM:off_3580   o
                dc.w sprite_8_8
                dc.w $1E7E
                dc.w $9500 ! ((grp_F8C60 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8C60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8C60 / 2) >> 16)
                dc.w 1
