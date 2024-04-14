byte_2FBD90:    dc.b   0,  1,$7D,$7E,$81,$83,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_3018   o
                dc.w sprite_8_16
                dc.w $7D7C
                dc.w $9500 ! ((grp_C4E40 / 2) & $00FF)
                dc.w $9600 ! (((grp_C4E40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C4E40 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $757C
                dc.w $9500 ! ((grp_F7A20 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7A20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7A20 / 2) >> 16)
                dc.w 1
