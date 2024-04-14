byte_2CFFB4:    dc.b   0,  0,$75,$85,$8B,$8E,$80,$89,$81,$89
                                        ; DATA XREF: ROM:off_CA8   o
                dc.w sprite_32_16
                dc.w $6F83
                dc.w $9500 ! ((grp_46B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_46B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_46B00 / 2) >> 16)
                dc.w 8
