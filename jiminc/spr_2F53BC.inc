byte_2F53BC:    dc.b   0,  0,$62,$A4,$65,$AA,$63,$A7,$64,$A7
                                        ; DATA XREF: ROM:off_2A70   o
                dc.w sprite_8_16
                dc.w $60A2
                dc.w $9500 ! ((grp_C1E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_C1E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C1E00 / 2) >> 16)
                dc.w 2
