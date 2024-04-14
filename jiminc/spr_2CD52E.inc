byte_2CD52E:    dc.b   0,  0,$A1,$68,$A3,$6A,$9A,$80,$9B,$80
                                        ; DATA XREF: ROM:off_8D4   o
                dc.w sprite_16_8
                dc.w $9C65
                dc.w $9500 ! ((grp_C7880 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7880 / 2) >> 16)
                dc.w 2
