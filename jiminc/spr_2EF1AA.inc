byte_2EF1AA:    dc.b   0,  0,$7D,$7D,$86,$83,$81,$80,$82,$80
                                        ; DATA XREF: ROM:off_248C   o
                dc.w sprite_16_16
                dc.w $7B7B
                dc.w $9500 ! ((grp_8AC80 / 2) & $00FF)
                dc.w $9600 ! (((grp_8AC80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8AC80 / 2) >> 16)
                dc.w 4
