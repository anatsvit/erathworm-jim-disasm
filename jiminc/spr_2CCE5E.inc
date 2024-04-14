byte_2CCE5E:    dc.b   0,  1,$7D,$7C,$84,$82,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_834   o
                dc.w sprite_16_8
                dc.w $7B7A
                dc.w $9500 ! ((grp_C7040 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7040 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7040 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7F82
                dc.w $9500 ! ((grp_E17A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E17A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E17A0 / 2) >> 16)
                dc.w 1
