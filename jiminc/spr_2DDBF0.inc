byte_2DDBF0:    dc.b   0,  3,$76,$63,$8D,$91,$81,$7A,$8B,$6C
                                        ; DATA XREF: ROM:off_1708   o
                dc.w sprite_32_24
                dc.w $7170
                dc.w $9500 ! ((grp_12A0C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_12A0C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_12A0C0 / 2) >> 16)
                dc.w $C
                dc.w sprite_24_8
                dc.w $7488
                dc.w $9500 ! ((grp_188BC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_188BC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_188BC0 / 2) >> 16)
                dc.w 3
                dc.w sprite_16_8
                dc.w $8068
                dc.w $9500 ! ((grp_D2380 / 2) & $00FF)
                dc.w $9600 ! (((grp_D2380 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D2380 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7C90
                dc.w $9500 ! ((grp_EB200 / 2) & $00FF)
                dc.w $9600 ! (((grp_EB200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EB200 / 2) >> 16)
                dc.w 1
