byte_2F3ED4:    dc.b   0,  0,$8E,$82,$8E,$80,$8E,$81,$8F,$81
                                        ; DATA XREF: ROM:off_28A8   o
                dc.w sprite_8_8
                dc.w $7E80
                dc.w $9500 ! ((grp_F40A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F40A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F40A0 / 2) >> 16)
                dc.w 1
