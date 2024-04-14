byte_2FBD22:    dc.b   0,  0,$7D,$7D,$85,$83,$81,$80,$82,$80
                                        ; DATA XREF: ROM:off_3004   o
                dc.w sprite_16_16
                dc.w $787B
                dc.w $9500 ! ((grp_92280 / 2) & $00FF)
                dc.w $9600 ! (((grp_92280 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_92280 / 2) >> 16)
                dc.w 4
