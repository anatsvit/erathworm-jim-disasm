byte_2FCDFC:    dc.b   0,  1,$7D,$7B,$84,$82,$80,$7E,$81,$7E
                                        ; DATA XREF: ROM:off_3238   o
                dc.w sprite_8_8
                dc.w $7B79
                dc.w $9500 ! ((grp_F8020 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8020 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8020 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $8281
                dc.w $9500 ! ((grp_F8040 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8040 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8040 / 2) >> 16)
                dc.w 1
