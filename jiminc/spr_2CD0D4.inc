byte_2CD0D4:    dc.b   0,  1,$7C,$7C,$83,$84,$80,$80,$7F,$80
                                        ; DATA XREF: ROM:off_870   o
                dc.w sprite_16_8
                dc.w $7A7A
                dc.w $9500 ! ((grp_C8040 / 2) & $00FF)
                dc.w $9600 ! (((grp_C8040 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C8040 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7B82
                dc.w $9500 ! ((grp_E2220 / 2) & $00FF)
                dc.w $9600 ! (((grp_E2220 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E2220 / 2) >> 16)
                dc.w 1
