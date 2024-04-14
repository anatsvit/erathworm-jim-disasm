byte_2FD066:    dc.b   0,  2,$77,$82,$7E,$90,$7A,$89,$7B,$89
                                        ; DATA XREF: ROM:off_328C   o
                dc.w sprite_32_8
                dc.w $6C89
                dc.w $9500 ! ((grp_A1980 / 2) & $00FF)
                dc.w $9600 ! (((grp_A1980 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A1980 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $737D
                dc.w $9500 ! ((grp_F8840 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8840 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8840 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $7681
                dc.w $9500 ! ((grp_F8820 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8820 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8820 / 2) >> 16)
                dc.w 1
