byte_2EDFE0:    dc.b   0,  0,$7C,$82,$8A,$8E,$83,$88,$84,$88
                                        ; DATA XREF: ROM:off_2348   o
                dc.w sprite_16_16
                dc.w $7C80
                dc.w $9500 ! ((grp_89900 / 2) & $00FF)
                dc.w $9600 ! (((grp_89900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_89900 / 2) >> 16)
                dc.w 4
