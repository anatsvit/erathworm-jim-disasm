byte_2CC328:    dc.b   0,  0,$82,$82,$8E,$8D,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:off_730   o
                dc.w sprite_16_16
                dc.w $8080
                dc.w $9500 ! ((grp_72800 / 2) & $00FF)
                dc.w $9600 ! (((grp_72800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_72800 / 2) >> 16)
                dc.w 4
