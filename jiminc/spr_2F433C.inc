byte_2F433C:    dc.b   0,  0,$7F,$7F,$82,$82,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_2920   o
                dc.w sprite_8_8
                dc.w $7D7D
                dc.w $9500 ! ((grp_F36C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F36C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F36C0 / 2) >> 16)
                dc.w 1
