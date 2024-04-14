byte_2FBF72:    dc.b   0,  1,$7E,$7D,$83,$85,$80,$81,$81,$81
                                        ; DATA XREF: ROM:off_305C   o
                dc.w sprite_8_16
                dc.w $7E7B
                dc.w $9500 ! ((grp_C4E80 / 2) & $00FF)
                dc.w $9600 ! (((grp_C4E80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C4E80 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $767F
                dc.w $9500 ! ((grp_F7B20 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7B20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7B20 / 2) >> 16)
                dc.w 1
