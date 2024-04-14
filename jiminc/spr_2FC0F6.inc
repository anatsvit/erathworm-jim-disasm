byte_2FC0F6:    dc.b   0,  0,$7A,$8E,$7F,$9F,$7C,$96,$7D,$96
                                        ; DATA XREF: ROM:off_309C   o
                dc.w sprite_16_24
                dc.w $758C
                dc.w $9500 ! ((grp_181240 / 2) & $00FF)
                dc.w $9600 ! (((grp_181240 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_181240 / 2) >> 16)
                dc.w 6
