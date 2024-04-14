byte_2FBD7A:    dc.b   0,  0,$7D,$7E,$81,$85,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_3014   o
                dc.w sprite_16_16
                dc.w $757C
                dc.w $9500 ! ((grp_92480 / 2) & $00FF)
                dc.w $9600 ! (((grp_92480 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_92480 / 2) >> 16)
                dc.w 4
