byte_2DFD9C:    dc.b   0,  1,$6A,$63,$8A,$8E,$7A,$78,$7F,$64
                                        ; DATA XREF: ROM:off_1868   o
                dc.w sprite_32_32
                dc.w $6D71
                dc.w $9500 ! ((grp_1F800 / 2) & $00FF)
                dc.w $9600 ! (((grp_1F800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1F800 / 2) >> 16)
                dc.w $10
                dc.w sprite_32_16
                dc.w $6861
                dc.w $9500 ! ((grp_4E000 / 2) & $00FF)
                dc.w $9600 ! (((grp_4E000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_4E000 / 2) >> 16)
                dc.w 8
