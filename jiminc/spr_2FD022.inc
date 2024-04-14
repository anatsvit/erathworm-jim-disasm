byte_2FD022:    dc.b   0,  1,$7E,$65,$9D,$71,$8D,$6B,$8E,$6B
                                        ; DATA XREF: ROM:off_3284   o
                dc.w sprite_32_16
                dc.w $7C63
                dc.w $9500 ! ((grp_59500 / 2) & $00FF)
                dc.w $9600 ! (((grp_59500 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_59500 / 2) >> 16)
                dc.w 8
                dc.w sprite_8_8
                dc.w $9C63
                dc.w $9500 ! ((grp_F80E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F80E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F80E0 / 2) >> 16)
                dc.w 1
