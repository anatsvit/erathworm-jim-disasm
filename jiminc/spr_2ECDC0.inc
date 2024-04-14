byte_2ECDC0:    dc.b   0,  2,$79,$85,$87,$8D,$7D,$89,$7E,$89
                                        ; DATA XREF: ROM:off_2220   o
                dc.w sprite_8_16
                dc.w $7A83
                dc.w $9500 ! ((grp_BE780 / 2) & $00FF)
                dc.w $9600 ! (((grp_BE780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_BE780 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7288
                dc.w $9500 ! ((grp_EFCE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFCE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFCE0 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $8283
                dc.w $9500 ! ((grp_EFD00 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFD00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFD00 / 2) >> 16)
                dc.w 1
