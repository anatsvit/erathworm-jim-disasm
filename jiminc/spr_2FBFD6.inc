byte_2FBFD6:    dc.b   0,  0,$7D,$7F,$83,$82,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_306C   o
                dc.w sprite_16_8
                dc.w $787D
                dc.w $9500 ! ((grp_DF440 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF440 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF440 / 2) >> 16)
                dc.w 2
