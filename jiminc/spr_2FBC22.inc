byte_2FBC22:    dc.b   0,  1,$75,$78,$89,$8A,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_2FDC   o
                dc.w sprite_24_24
                dc.w $7776
                dc.w $9500 ! ((grp_153E80 / 2) & $00FF)
                dc.w $9600 ! (((grp_153E80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_153E80 / 2) >> 16)
                dc.w 9
                dc.w sprite_8_16
                dc.w $6F76
                dc.w $9500 ! ((grp_C4D80 / 2) & $00FF)
                dc.w $9600 ! (((grp_C4D80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C4D80 / 2) >> 16)
                dc.w 2
