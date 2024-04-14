byte_2FBBC8:    dc.b   0,  0,$73,$73,$8D,$8E,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_2FD0   o
                dc.w sprite_32_32
                dc.w $7171
                dc.w $9500 ! ((grp_44400 / 2) & $00FF)
                dc.w $9600 ! (((grp_44400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_44400 / 2) >> 16)
                dc.w $10
