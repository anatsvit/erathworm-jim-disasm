byte_2CE62C:    dc.b   0,  1,$74,$73,$8D,$8E,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_AC0   o
                dc.w sprite_8_16
                dc.w $7C77
                dc.w $9500 ! ((grp_B0540 / 2) & $00FF)
                dc.w $9600 ! (((grp_B0540 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B0540 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $847F
                dc.w $9500 ! ((grp_E1C80 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1C80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1C80 / 2) >> 16)
                dc.w 1
