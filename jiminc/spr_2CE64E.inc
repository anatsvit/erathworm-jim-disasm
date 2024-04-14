byte_2CE64E:    dc.b   0,  1,$74,$73,$8D,$8E,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_AC4   o
                dc.w sprite_16_8
                dc.w $797A
                dc.w $9500 ! ((grp_C7680 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7680 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7D82
                dc.w $9500 ! ((grp_E1CA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1CA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1CA0 / 2) >> 16)
                dc.w 1
