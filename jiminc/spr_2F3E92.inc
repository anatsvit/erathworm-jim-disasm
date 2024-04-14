byte_2F3E92:    dc.b   0,  0,$8E,$81,$8E,$81,$8E,$81,$8F,$81
                                        ; DATA XREF: ROM:off_289C   o
                dc.w sprite_8_8
                dc.w $7B7F
                dc.w $9500 ! ((grp_F4040 / 2) & $00FF)
                dc.w $9600 ! (((grp_F4040 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F4040 / 2) >> 16)
                dc.w 1
