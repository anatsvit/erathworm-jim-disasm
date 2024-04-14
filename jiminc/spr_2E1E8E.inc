byte_2E1E8E:    dc.b   0,  2,$67,$80,$85,$8C,$76,$86,$77,$86
                                        ; DATA XREF: ROM:off_19BC   o
                dc.w sprite_32_8
                dc.w $6D81
                dc.w $9500 ! ((grp_99780 / 2) & $00FF)
                dc.w $9600 ! (((grp_99780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_99780 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $7179
                dc.w $9500 ! ((grp_D0400 / 2) & $00FF)
                dc.w $9600 ! (((grp_D0400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D0400 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $6582
                dc.w $9500 ! ((grp_B7640 / 2) & $00FF)
                dc.w $9600 ! (((grp_B7640 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B7640 / 2) >> 16)
                dc.w 2
