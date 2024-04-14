byte_2EDD5C:    dc.b   0,  2,$75,$89,$8B,$8F,$80,$8C,$81,$8C
                                        ; DATA XREF: ROM:off_2310   o
                dc.w sprite_16_16
                dc.w $7A83
                dc.w $9500 ! ((grp_89800 / 2) & $00FF)
                dc.w $9600 ! (((grp_89800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_89800 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $7288
                dc.w $9500 ! ((grp_F0440 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0440 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0440 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $8A8A
                dc.w $9500 ! ((grp_F0460 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0460 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0460 / 2) >> 16)
                dc.w 1
