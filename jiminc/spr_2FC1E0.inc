byte_2FC1E0:    dc.b   0,  1,$6C,$8B,$79,$9B,$72,$93,$73,$93
                                        ; DATA XREF: ROM:off_30C0   o
                dc.w sprite_16_16
                dc.w $6C89
                dc.w $9500 ! ((grp_92C00 / 2) & $00FF)
                dc.w $9600 ! (((grp_92C00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_92C00 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_16
                dc.w $6A91
                dc.w $9500 ! ((grp_C5180 / 2) & $00FF)
                dc.w $9600 ! (((grp_C5180 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C5180 / 2) >> 16)
                dc.w 2
