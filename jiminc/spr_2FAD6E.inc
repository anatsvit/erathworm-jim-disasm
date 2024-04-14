byte_2FAD6E:    dc.b   0,  1,$7F,$7E,$83,$83,$81,$80,$82,$80
                                        ; DATA XREF: ROM:off_2E6C   o
                dc.w sprite_16_8
                dc.w $7D7C
                dc.w $9500 ! ((grp_DEFC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_DEFC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DEFC0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7D84
                dc.w $9500 ! ((grp_F71A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F71A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F71A0 / 2) >> 16)
                dc.w 1
