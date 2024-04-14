byte_2FBD0C:    dc.b   0,  0,$7D,$7E,$85,$85,$81,$81,$82,$81
                                        ; DATA XREF: ROM:off_3000   o
                dc.w sprite_16_16
                dc.w $7B7C
                dc.w $9500 ! ((grp_92200 / 2) & $00FF)
                dc.w $9600 ! (((grp_92200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_92200 / 2) >> 16)
                dc.w 4
