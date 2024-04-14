byte_2FCCE6:    dc.b   0,  2,$7A,$79,$87,$86,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_320C   o
                dc.w sprite_8_24
                dc.w $7A77
                dc.w $9500 ! ((grp_1A03E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_1A03E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1A03E0 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_16
                dc.w $727F
                dc.w $9500 ! ((grp_C5800 / 2) & $00FF)
                dc.w $9600 ! (((grp_C5800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C5800 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $8277
                dc.w $9500 ! ((grp_C5840 / 2) & $00FF)
                dc.w $9600 ! (((grp_C5840 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C5840 / 2) >> 16)
                dc.w 2
