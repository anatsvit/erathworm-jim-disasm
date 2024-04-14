byte_2FB17A:    dc.b   0,  1,$7C,$7C,$82,$80,$7F,$7E,$80,$7E
                                        ; DATA XREF: ROM:off_2F24   o
                dc.w sprite_16_8
                dc.w $7A7A
                dc.w $9500 ! ((grp_DF0C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF0C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF0C0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7A82
                dc.w $9500 ! ((grp_F7700 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7700 / 2) >> 16)
                dc.w 1
