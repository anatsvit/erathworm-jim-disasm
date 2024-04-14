byte_2FD1E8:    dc.b   0,  1,$7C,$7A,$83,$85,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_32B8   o
                dc.w sprite_16_8
                dc.w $7680
                dc.w $9500 ! ((grp_DFA40 / 2) & $00FF)
                dc.w $9600 ! (((grp_DFA40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DFA40 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7E78
                dc.w $9500 ! ((grp_F81C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F81C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F81C0 / 2) >> 16)
                dc.w 1
