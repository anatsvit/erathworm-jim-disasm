byte_2CD518:    dc.b   0,  0,$A2,$67,$A6,$69,$8D,$91,$8E,$91
                                        ; DATA XREF: ROM:off_8D0   o
                dc.w sprite_16_8
                dc.w $9C65
                dc.w $9500 ! ((grp_C7840 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7840 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7840 / 2) >> 16)
                dc.w 2
