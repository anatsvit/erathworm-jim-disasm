byte_2FAF1C:    dc.b   0,  0,$80,$7F,$7E,$7C,$7F,$7D,$80,$7D
                                        ; DATA XREF: ROM:off_2EB8   o
                dc.w sprite_8_8
                dc.w $7E7D
                dc.w $9500 ! ((grp_F73E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F73E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F73E0 / 2) >> 16)
                dc.w 1
