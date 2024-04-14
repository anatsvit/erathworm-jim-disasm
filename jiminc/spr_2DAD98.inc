byte_2DAD98:    dc.b   0,  1,$6B,$86,$96,$90,$80,$8B,$89,$8D
                                        ; DATA XREF: ROM:off_1508   o
                dc.w sprite_32_16
                dc.w $6984
                dc.w $9500 ! ((grp_4BA00 / 2) & $00FF)
                dc.w $9600 ! (((grp_4BA00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_4BA00 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_16
                dc.w $8984
                dc.w $9500 ! ((grp_7E000 / 2) & $00FF)
                dc.w $9600 ! (((grp_7E000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_7E000 / 2) >> 16)
                dc.w 4
