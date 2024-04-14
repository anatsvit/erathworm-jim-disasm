byte_2FAEAE:    dc.b   0,  0,$81,$7F,$7E,$7D,$7F,$7E,$80,$7E
                                        ; DATA XREF: ROM:off_2EA4   o
                dc.w sprite_8_8
                dc.w $7F7D
                dc.w $9500 ! ((grp_F7340 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7340 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7340 / 2) >> 16)
                dc.w 1
