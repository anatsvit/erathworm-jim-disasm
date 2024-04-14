byte_2FC398:    dc.b   0,  0,$5E,$82,$71,$8A,$67,$86,$68,$86
                                        ; DATA XREF: ROM:off_30F8   o
                dc.w sprite_24_16
                dc.w $5C80
                dc.w $9500 ! ((grp_16BF40 / 2) & $00FF)
                dc.w $9600 ! (((grp_16BF40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16BF40 / 2) >> 16)
                dc.w 6
