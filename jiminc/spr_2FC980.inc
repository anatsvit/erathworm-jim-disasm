byte_2FC980:    dc.b   0,  1,$7E,$73,$85,$8A,$81,$7E,$82,$7E
                                        ; DATA XREF: ROM:off_3170   o
                dc.w sprite_16_24
                dc.w $7C71
                dc.w $9500 ! ((grp_181840 / 2) & $00FF)
                dc.w $9600 ! (((grp_181840 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_181840 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_8
                dc.w $7E89
                dc.w $9500 ! ((grp_F8000 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8000 / 2) >> 16)
                dc.w 1
