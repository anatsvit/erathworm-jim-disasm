byte_2F1984:    dc.b   0,  2,$6F,$7F,$8E,$8E,$7E,$89,$7F,$89
                                        ; DATA XREF: ROM:off_2698   o
                dc.w sprite_32_8
                dc.w $6D89
                dc.w $9500 ! ((grp_9EA80 / 2) & $00FF)
                dc.w $9600 ! (((grp_9EA80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_9EA80 / 2) >> 16)
                dc.w 4
                dc.w sprite_24_8
                dc.w $7581
                dc.w $9500 ! ((grp_18DEA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_18DEA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_18DEA0 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_8
                dc.w $8D89
                dc.w $9500 ! ((grp_F1FA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F1FA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F1FA0 / 2) >> 16)
                dc.w 1
