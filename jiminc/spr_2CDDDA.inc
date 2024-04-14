byte_2CDDDA:    dc.b   0,  3,$6B,$69,$90,$89,$7D,$79,$7E,$79
                                        ; DATA XREF: ROM:off_9C4   o
                dc.w sprite_32_32
                dc.w $6B67
                dc.w $9500 ! ((grp_11A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_11A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_11A00 / 2) >> 16)
                dc.w $10
                dc.w sprite_32_8
                dc.w $6B87
                dc.w $9500 ! ((grp_96E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_96E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_96E00 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_32
                dc.w $8B67
                dc.w $9500 ! ((grp_A1F80 / 2) & $00FF)
                dc.w $9600 ! (((grp_A1F80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A1F80 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_16
                dc.w $636E
                dc.w $9500 ! ((grp_B0C40 / 2) & $00FF)
                dc.w $9600 ! (((grp_B0C40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B0C40 / 2) >> 16)
                dc.w 2
