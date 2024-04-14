byte_2FC312:    dc.b   0,  1,$64,$88,$72,$92,$6B,$8D,$6C,$8D
                                        ; DATA XREF: ROM:off_30E4   o
                dc.w sprite_16_8
                dc.w $628E
                dc.w $9500 ! ((grp_DF700 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF700 / 2) >> 16)
                dc.w 2
                dc.w sprite_16_8
                dc.w $6586
                dc.w $9500 ! ((grp_DF6C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF6C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF6C0 / 2) >> 16)
                dc.w 2
