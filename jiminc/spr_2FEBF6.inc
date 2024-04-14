byte_2FEBF6:    dc.b   0,  1,$7B,$7E,$85,$8D,$80,$82,$81,$82
                                        ; DATA XREF: ROM:000034B4   o
                dc.w sprite_16_24
                dc.w $797E
                dc.w $9500 ! ((grp_182B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_182B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_182B00 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_8
                dc.w $8176
                dc.w $9500 ! ((grp_F9040 / 2) & $00FF)
                dc.w $9600 ! (((grp_F9040 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F9040 / 2) >> 16)
                dc.w 1
