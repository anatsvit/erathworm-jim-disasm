byte_2FC382:    dc.b   0,  0,$61,$85,$71,$8D,$69,$89,$6A,$89
                                        ; DATA XREF: ROM:off_30F4   o
                dc.w sprite_24_16
                dc.w $5C83
                dc.w $9500 ! ((grp_16BE80 / 2) & $00FF)
                dc.w $9600 ! (((grp_16BE80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16BE80 / 2) >> 16)
                dc.w 6
