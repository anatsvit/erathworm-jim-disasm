byte_2EFBF2:    dc.b   0,  3,$74,$76,$8B,$89,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_2574   o
                dc.w sprite_32_8
                dc.w $7274
                dc.w $9500 ! ((grp_9E500 / 2) & $00FF)
                dc.w $9600 ! (((grp_9E500 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_9E500 / 2) >> 16)
                dc.w 4
                dc.w sprite_32_8
                dc.w $7284
                dc.w $9500 ! ((grp_9E580 / 2) & $00FF)
                dc.w $9600 ! (((grp_9E580 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_9E580 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $727C
                dc.w $9500 ! ((grp_F1300 / 2) & $00FF)
                dc.w $9600 ! (((grp_F1300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F1300 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $8A7C
                dc.w $9500 ! ((grp_F1320 / 2) & $00FF)
                dc.w $9600 ! (((grp_F1320 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F1320 / 2) >> 16)
                dc.w 1
