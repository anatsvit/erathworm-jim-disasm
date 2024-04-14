byte_2E9B72:    dc.b   0,  1,$7A,$7C,$84,$84,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_1EAC   o
                dc.w sprite_8_8
                dc.w $787A
                dc.w $9500 ! ((grp_EEB60 / 2) & $00FF)
                dc.w $9600 ! (((grp_EEB60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EEB60 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $807F
                dc.w $9500 ! ((grp_EEB80 / 2) & $00FF)
                dc.w $9600 ! (((grp_EEB80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EEB80 / 2) >> 16)
                dc.w 1
