byte_2CDAE0:    dc.b   0,  0,$79,$7A,$7A,$81,$79,$7D,$7A,$7D
                                        ; DATA XREF: ROM:off_970   o
                dc.w sprite_8_16
                dc.w $7778
                dc.w $9500 ! ((grp_B02C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_B02C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B02C0 / 2) >> 16)
                dc.w 2
