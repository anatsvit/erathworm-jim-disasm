byte_2FC1BE:    dc.b   0,  1,$70,$8D,$79,$9C,$74,$94,$75,$94
                                        ; DATA XREF: ROM:off_30BC   o
                dc.w sprite_8_24
                dc.w $6D8B
                dc.w $9500 ! ((grp_1A02C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_1A02C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1A02C0 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_16
                dc.w $758B
                dc.w $9500 ! ((grp_C5140 / 2) & $00FF)
                dc.w $9600 ! (((grp_C5140 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C5140 / 2) >> 16)
                dc.w 2
