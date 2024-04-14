byte_2DFAAC:    dc.b   0,  4,$68,$62,$8F,$8D,$7B,$77,$7C,$6D
                                        ; DATA XREF: ROM:off_1848   o
                dc.w sprite_32_32
                dc.w $6E60
                dc.w $9500 ! ((grp_1F200 / 2) & $00FF)
                dc.w $9600 ! (((grp_1F200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1F200 / 2) >> 16)
                dc.w $10
                dc.w sprite_24_16
                dc.w $6E80
                dc.w $9500 ! ((grp_15F880 / 2) & $00FF)
                dc.w $9600 ! (((grp_15F880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_15F880 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_24
                dc.w $6668
                dc.w $9500 ! ((grp_1985E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_1985E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1985E0 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_24
                dc.w $8E60
                dc.w $9500 ! ((grp_198640 / 2) & $00FF)
                dc.w $9600 ! (((grp_198640 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_198640 / 2) >> 16)
                dc.w 3
                dc.w sprite_16_8
                dc.w $8688
                dc.w $9500 ! ((grp_D2940 / 2) & $00FF)
                dc.w $9600 ! (((grp_D2940 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D2940 / 2) >> 16)
                dc.w 2
