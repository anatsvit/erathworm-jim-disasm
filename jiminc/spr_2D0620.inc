byte_2D0620:    dc.b   0,  1,$62,$7A,$6E,$8B,$68,$82,$69,$82
                                        ; DATA XREF: ROM:off_D50   o
                dc.w sprite_16_16
                dc.w $6078
                dc.w $9500 ! ((grp_75B80 / 2) & $00FF)
                dc.w $9600 ! (((grp_75B80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_75B80 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $6A88
                dc.w $9500 ! ((grp_E34C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E34C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E34C0 / 2) >> 16)
                dc.w 1
