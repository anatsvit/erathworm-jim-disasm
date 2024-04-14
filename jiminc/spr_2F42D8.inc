byte_2F42D8:    dc.b   0,  1,$7E,$7E,$82,$83,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_2910   o
                dc.w sprite_8_16
                dc.w $7A7C
                dc.w $9500 ! ((grp_C1440 / 2) & $00FF)
                dc.w $9600 ! (((grp_C1440 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C1440 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $827C
                dc.w $9500 ! ((grp_F3680 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3680 / 2) >> 16)
                dc.w 1
