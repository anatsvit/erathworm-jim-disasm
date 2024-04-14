byte_2CFB04:    dc.b   0,  0,$7A,$83,$84,$81,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_C00   o
                dc.w sprite_16_8
                dc.w $7881
                dc.w $9500 ! ((grp_C88C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C88C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C88C0 / 2) >> 16)
                dc.w 2
