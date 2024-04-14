byte_2E9BAA:    dc.b   0,  1,$7D,$7B,$83,$85,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_1EB4   o
                dc.w sprite_8_8
                dc.w $7B81
                dc.w $9500 ! ((grp_EEBA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_EEBA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EEBA0 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $7E79
                dc.w $9500 ! ((grp_EEBC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_EEBC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EEBC0 / 2) >> 16)
                dc.w 1
