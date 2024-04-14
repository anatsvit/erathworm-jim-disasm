byte_2FC1A8:    dc.b   0,  0,$70,$8B,$7B,$9D,$75,$94,$76,$94
                                        ; DATA XREF: ROM:off_30B8   o
                dc.w sprite_16_24
                dc.w $6E89
                dc.w $9500 ! ((grp_181600 / 2) & $00FF)
                dc.w $9600 ! (((grp_181600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_181600 / 2) >> 16)
                dc.w 6
