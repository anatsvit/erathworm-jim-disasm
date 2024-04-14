byte_2FD288:    dc.b   0,  3,$79,$78,$8A,$8D,$81,$82,$82,$82
                                        ; DATA XREF: ROM:off_32C8   o
                dc.w sprite_16_16
                dc.w $7778
                dc.w $9500 ! ((grp_95A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_95A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_95A00 / 2) >> 16)
                dc.w 4
                dc.w sprite_32_8
                dc.w $7288
                dc.w $9500 ! ((grp_A1580 / 2) & $00FF)
                dc.w $9600 ! (((grp_A1580 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A1580 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $7E70
                dc.w $9500 ! ((grp_F8260 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8260 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8260 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $8778
                dc.w $9500 ! ((grp_F8280 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8280 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8280 / 2) >> 16)
                dc.w 1
