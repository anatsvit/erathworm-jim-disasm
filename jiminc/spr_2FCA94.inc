byte_2FCA94:    dc.b   0,  0,$7C,$79,$84,$84,$80,$7E,$81,$7E
                                        ; DATA XREF: ROM:off_31A0   o
                dc.w sprite_16_16
                dc.w $7A77
                dc.w $9500 ! ((grp_93F00 / 2) & $00FF)
                dc.w $9600 ! (((grp_93F00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_93F00 / 2) >> 16)
                dc.w 4
