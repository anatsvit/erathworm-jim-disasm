byte_2FEBD4:    dc.b   0,  1,$7C,$85,$85,$8D,$80,$89,$81,$89
                                        ; DATA XREF: ROM:off_34B0   o
                dc.w sprite_16_8
                dc.w $7A83
                dc.w $9500 ! ((grp_E0880 / 2) & $00FF)
                dc.w $9600 ! (((grp_E0880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E0880 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7D8B
                dc.w $9500 ! ((grp_F9020 / 2) & $00FF)
                dc.w $9600 ! (((grp_F9020 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F9020 / 2) >> 16)
                dc.w 1
