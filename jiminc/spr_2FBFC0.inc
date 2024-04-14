byte_2FBFC0:    dc.b   0,  0,$7D,$7F,$83,$82,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_3068   o
                dc.w sprite_16_8
                dc.w $787D
                dc.w $9500 ! ((grp_DF400 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF400 / 2) >> 16)
                dc.w 2
