byte_2F53E8:    dc.b   0,  0,$64,$A0,$6A,$A4,$67,$A2,$68,$A2
                                        ; DATA XREF: ROM:off_2A78   o
                dc.w sprite_16_8
                dc.w $629E
                dc.w $9500 ! ((grp_DCA00 / 2) & $00FF)
                dc.w $9600 ! (((grp_DCA00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DCA00 / 2) >> 16)
                dc.w 2
