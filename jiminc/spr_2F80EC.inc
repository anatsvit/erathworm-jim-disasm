byte_2F80EC:    dc.b   0,  0,$7D,$89,$84,$91,$80,$8D,$81,$8D
                                        ; DATA XREF: ROM:off_2C20   o
                dc.w sprite_16_8
                dc.w $788A
                dc.w $9500 ! ((grp_DD740 / 2) & $00FF)
                dc.w $9600 ! (((grp_DD740 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DD740 / 2) >> 16)
                dc.w 2
