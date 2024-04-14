byte_2FC3AE:    dc.b   0,  1,$60,$82,$70,$8A,$68,$86,$69,$86
                                        ; DATA XREF: ROM:off_30FC   o
                dc.w sprite_16_16
                dc.w $6380
                dc.w $9500 ! ((grp_92E80 / 2) & $00FF)
                dc.w $9600 ! (((grp_92E80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_92E80 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $5B85
                dc.w $9500 ! ((grp_F7DE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7DE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7DE0 / 2) >> 16)
                dc.w 1
