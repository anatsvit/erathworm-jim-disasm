byte_2F53D2:    dc.b   0,  0,$62,$AA,$63,$A9,$62,$A9,$63,$A9
                                        ; DATA XREF: ROM:off_2A74   o
                dc.w sprite_8_8
                dc.w $5EA8
                dc.w $9500 ! ((grp_F4640 / 2) & $00FF)
                dc.w $9600 ! (((grp_F4640 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F4640 / 2) >> 16)
                dc.w 1
