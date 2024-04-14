byte_2FC2FC:    dc.b   0,  0,$62,$87,$74,$92,$6B,$8C,$6C,$8C
                                        ; DATA XREF: ROM:off_30E0   o
                dc.w sprite_24_16
                dc.w $5F85
                dc.w $9500 ! ((grp_16BC40 / 2) & $00FF)
                dc.w $9600 ! (((grp_16BC40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16BC40 / 2) >> 16)
                dc.w 6
