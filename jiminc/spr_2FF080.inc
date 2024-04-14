byte_2FF080:    dc.b   0,  1,$7D,$7E,$83,$82,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_3530   o
                dc.w sprite_8_8
                dc.w $7B7C
                dc.w $9500 ! ((grp_F9120 / 2) & $00FF)
                dc.w $9600 ! (((grp_F9120 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F9120 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $837F
                dc.w $9500 ! ((grp_F9100 / 2) & $00FF)
                dc.w $9600 ! (((grp_F9100 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F9100 / 2) >> 16)
                dc.w 1
