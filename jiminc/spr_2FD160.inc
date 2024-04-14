byte_2FD160:    dc.b   0,  2,$7E,$73,$8A,$89,$84,$7E,$85,$7E
                                        ; DATA XREF: ROM:off_32A8   o
                dc.w sprite_16_16
                dc.w $7C79
                dc.w $9500 ! ((grp_94D80 / 2) & $00FF)
                dc.w $9600 ! (((grp_94D80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94D80 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $7A71
                dc.w $9500 ! ((grp_DFA00 / 2) & $00FF)
                dc.w $9600 ! (((grp_DFA00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DFA00 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8589
                dc.w $9500 ! ((grp_F8160 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8160 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8160 / 2) >> 16)
                dc.w 1
