byte_2F537A:    dc.b   0,  0,$5F,$9C,$65,$9F,$62,$9D,$63,$9D
                                        ; DATA XREF: ROM:off_2A64   o
                dc.w sprite_16_8
                dc.w $589A
                dc.w $9500 ! ((grp_DC940 / 2) & $00FF)
                dc.w $9600 ! (((grp_DC940 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DC940 / 2) >> 16)
                dc.w 2
