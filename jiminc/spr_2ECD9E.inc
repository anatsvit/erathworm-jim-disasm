byte_2ECD9E:    dc.b   0,  1,$7E,$87,$86,$8D,$7B,$8A,$7C,$8A
                                        ; DATA XREF: ROM:off_221C   o
                dc.w sprite_16_8
                dc.w $7C88
                dc.w $9500 ! ((grp_D8400 / 2) & $00FF)
                dc.w $9600 ! (((grp_D8400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D8400 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8080
                dc.w $9500 ! ((grp_EFCC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFCC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFCC0 / 2) >> 16)
                dc.w 1
