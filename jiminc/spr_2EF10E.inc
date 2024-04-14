byte_2EF10E:    dc.b   0,  1,$7E,$7C,$82,$85,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_2474   o
                dc.w sprite_16_8
                dc.w $7C7A
                dc.w $9500 ! ((grp_D9700 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9700 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7C82
                dc.w $9500 ! ((grp_F0D40 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0D40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0D40 / 2) >> 16)
                dc.w 1
