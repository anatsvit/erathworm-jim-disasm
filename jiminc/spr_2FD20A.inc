byte_2FD20A:    dc.b   0,  1,$7C,$7C,$86,$82,$81,$7F,$82,$7F
                                        ; DATA XREF: ROM:off_32BC   o
                dc.w sprite_16_8
                dc.w $7A7D
                dc.w $9500 ! ((grp_DFA80 / 2) & $00FF)
                dc.w $9600 ! (((grp_DFA80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DFA80 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8275
                dc.w $9500 ! ((grp_F81E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F81E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F81E0 / 2) >> 16)
                dc.w 1
