byte_2FC7F8:    dc.b   0,  0,$74,$71,$8A,$8E,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_3138   o
                dc.w sprite_32_16
                dc.w $6E6F
                dc.w $9500 ! ((grp_59600 / 2) & $00FF)
                dc.w $9600 ! (((grp_59600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_59600 / 2) >> 16)
                dc.w 8
