byte_2FCF1E:    dc.b   0,  0,$80,$65,$9A,$6F,$8D,$6A,$8E,$6A
                                        ; DATA XREF: ROM:off_3264   o
                dc.w sprite_32_16
                dc.w $7E63
                dc.w $9500 ! ((grp_59200 / 2) & $00FF)
                dc.w $9600 ! (((grp_59200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_59200 / 2) >> 16)
                dc.w 8
