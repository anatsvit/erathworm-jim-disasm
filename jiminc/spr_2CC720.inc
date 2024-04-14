byte_2CC720:    dc.b   0,  2,$6B,$85,$8E,$8D,$7C,$88,$7D,$88
                                        ; DATA XREF: ROM:off_7B0   o
                dc.w sprite_32_8
                dc.w $7188
                dc.w $9500 ! ((grp_96C00 / 2) & $00FF)
                dc.w $9600 ! (((grp_96C00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_96C00 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $6988
                dc.w $9500 ! ((grp_E1440 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1440 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1440 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $8180
                dc.w $9500 ! ((grp_E1460 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1460 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1460 / 2) >> 16)
                dc.w 1
