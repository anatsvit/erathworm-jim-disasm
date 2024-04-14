byte_2F9A32:    dc.b   0,  2,$61,$8A,$A1,$8E,$81,$8C,$82,$8C
                                        ; DATA XREF: ROM:off_2DB4   o
                dc.w sprite_32_8
                dc.w $648B
                dc.w $9500 ! ((grp_A0200 / 2) & $00FF)
                dc.w $9600 ! (((grp_A0200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A0200 / 2) >> 16)
                dc.w 4
                dc.w sprite_32_8
                dc.w $8489
                dc.w $9500 ! ((grp_A0280 / 2) & $00FF)
                dc.w $9600 ! (((grp_A0280 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A0280 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $5C8B
                dc.w $9500 ! ((grp_F6DE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F6DE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F6DE0 / 2) >> 16)
                dc.w 1
