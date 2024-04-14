byte_2EE03A:    dc.b   0,  1,$7D,$74,$85,$8F,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_2354   o
                dc.w sprite_8_32
                dc.w $7E72
                dc.w $9500 ! ((grp_AB000 / 2) & $00FF)
                dc.w $9600 ! (((grp_AB000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_AB000 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_16
                dc.w $767F
                dc.w $9500 ! ((grp_BF0C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_BF0C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_BF0C0 / 2) >> 16)
                dc.w 2
