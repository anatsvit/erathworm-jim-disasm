byte_2F42B6:    dc.b   0,  1,$7E,$7E,$83,$83,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_290C   o
                dc.w sprite_8_16
                dc.w $7A7C
                dc.w $9500 ! ((grp_C1400 / 2) & $00FF)
                dc.w $9600 ! (((grp_C1400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C1400 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $827C
                dc.w $9500 ! ((grp_F3660 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3660 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3660 / 2) >> 16)
                dc.w 1
