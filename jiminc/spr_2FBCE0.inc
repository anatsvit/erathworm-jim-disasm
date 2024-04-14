byte_2FBCE0:    dc.b   0,  0,$7B,$7D,$85,$86,$80,$81,$81,$81
                                        ; DATA XREF: ROM:off_2FF8   o
                dc.w sprite_16_16
                dc.w $797B
                dc.w $9500 ! ((grp_92100 / 2) & $00FF)
                dc.w $9600 ! (((grp_92100 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_92100 / 2) >> 16)
                dc.w 4
