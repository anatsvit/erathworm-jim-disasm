byte_2F550A:    dc.b   0,  1,$80,$7D,$84,$81,$82,$7F,$83,$7F
                                        ; DATA XREF: ROM:off_2AA4   o
                dc.w sprite_8_8
                dc.w $7A7C
                dc.w $9500 ! ((grp_F47A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F47A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F47A0 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $827B
                dc.w $9500 ! ((grp_F47C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F47C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F47C0 / 2) >> 16)
                dc.w 1
