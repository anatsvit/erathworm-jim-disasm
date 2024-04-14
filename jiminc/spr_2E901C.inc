byte_2E901C:    dc.b   0,  1,$74,$7F,$8D,$8E,$7F,$85,$7F,$8D
                                        ; DATA XREF: ROM:off_1E00   o
                dc.w sprite_32_16
                dc.w $7081
                dc.w $9500 ! ((grp_4D400 / 2) & $00FF)
                dc.w $9600 ! (((grp_4D400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_4D400 / 2) >> 16)
                dc.w 8
                dc.w sprite_24_8
                dc.w $7879
                dc.w $9500 ! ((grp_188500 / 2) & $00FF)
                dc.w $9600 ! (((grp_188500 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_188500 / 2) >> 16)
                dc.w 3
