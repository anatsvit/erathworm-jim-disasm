byte_2CCB36:    dc.b   0,  2,$77,$66,$88,$8F,$7F,$7A,$80,$7A
                                        ; DATA XREF: ROM:off_7F4   o
                dc.w sprite_16_32
                dc.w $786C
                dc.w $9500 ! ((grp_5AD00 / 2) & $00FF)
                dc.w $9600 ! (((grp_5AD00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_5AD00 / 2) >> 16)
                dc.w 8
                dc.w sprite_24_8
                dc.w $7564
                dc.w $9500 ! ((grp_182FE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_182FE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_182FE0 / 2) >> 16)
                dc.w 3
                dc.w sprite_24_8
                dc.w $768C
                dc.w $9500 ! ((grp_182F80 / 2) & $00FF)
                dc.w $9600 ! (((grp_182F80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_182F80 / 2) >> 16)
                dc.w 3
