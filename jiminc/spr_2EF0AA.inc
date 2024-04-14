byte_2EF0AA:    dc.b   0,  1,$7D,$7C,$81,$81,$7F,$7E,$80,$7E
                                        ; DATA XREF: ROM:off_2464   o
                dc.w sprite_16_8
                dc.w $7B7A
                dc.w $9500 ! ((grp_D96C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_D96C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D96C0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7B82
                dc.w $9500 ! ((grp_F0D20 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0D20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0D20 / 2) >> 16)
                dc.w 1
