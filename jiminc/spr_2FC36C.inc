byte_2FC36C:    dc.b   0,  0,$5F,$84,$72,$8D,$68,$88,$69,$88
                                        ; DATA XREF: ROM:off_30F0   o
                dc.w sprite_24_16
                dc.w $5D82
                dc.w $9500 ! ((grp_16BDC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_16BDC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16BDC0 / 2) >> 16)
                dc.w 6
