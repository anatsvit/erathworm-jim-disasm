byte_2FAFCC:    dc.b   0,  0,$7F,$7E,$7F,$7C,$7F,$7D,$80,$7D
                                        ; DATA XREF: ROM:off_2ED8   o
                dc.w sprite_8_8
                dc.w $7D7C
                dc.w $9500 ! ((grp_F74E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F74E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F74E0 / 2) >> 16)
                dc.w 1
