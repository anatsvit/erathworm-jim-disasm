byte_2FCF6C:    dc.b   0,  0,$8E,$65,$97,$73,$92,$6C,$93,$6C
                                        ; DATA XREF: ROM:off_3270   o
                dc.w sprite_16_24
                dc.w $8C63
                dc.w $9500 ! ((grp_181900 / 2) & $00FF)
                dc.w $9600 ! (((grp_181900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_181900 / 2) >> 16)
                dc.w 6
