byte_2FAFB6:    dc.b   0,  0,$7F,$7F,$7F,$7D,$7F,$7E,$80,$7E
                                        ; DATA XREF: ROM:off_2ED4   o
                dc.w sprite_8_8
                dc.w $7D7D
                dc.w $9500 ! ((grp_F74C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F74C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F74C0 / 2) >> 16)
                dc.w 1
