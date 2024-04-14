byte_2D31EC:    dc.b   0,  0,$80,$83,$80,$85,$80,$84,$81,$84
                                        ; DATA XREF: ROM:off_F70   o
                dc.w sprite_8_8
                dc.w $7B81
                dc.w $9500 ! ((grp_E46A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E46A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E46A0 / 2) >> 16)
                dc.w 1
