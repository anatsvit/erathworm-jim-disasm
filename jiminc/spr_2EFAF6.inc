byte_2EFAF6:    dc.b   0,  3,$79,$7D,$89,$8C,$81,$84,$82,$84
                                        ; DATA XREF: ROM:off_255C   o
                dc.w sprite_16_8
                dc.w $777D
                dc.w $9500 ! ((grp_D9800 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9800 / 2) >> 16)
                dc.w 2
                dc.w sprite_16_8
                dc.w $7785
                dc.w $9500 ! ((grp_D9680 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9680 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7F8D
                dc.w $9500 ! ((grp_F0D00 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0D00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0D00 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $877B
                dc.w $9500 ! ((grp_F0DA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0DA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0DA0 / 2) >> 16)
                dc.w 1
