byte_2CE096:    dc.b   0,  1,$83,$86,$96,$8D,$8C,$89,$8D,$89
                                        ; DATA XREF: ROM:off_9EC   o
                dc.w sprite_16_16
                dc.w $8180
                dc.w $9500 ! ((grp_74100 / 2) & $00FF)
                dc.w $9600 ! (((grp_74100 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_74100 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $9186
                dc.w $9500 ! ((grp_E1F80 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1F80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1F80 / 2) >> 16)
                dc.w 1
