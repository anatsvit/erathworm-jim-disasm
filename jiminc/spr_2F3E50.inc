byte_2F3E50:    dc.b   0,  0,$8D,$81,$8F,$81,$8E,$81,$8F,$81
                                        ; DATA XREF: ROM:off_2890   o
                dc.w sprite_8_8
                dc.w $7C7F
                dc.w $9500 ! ((grp_F3FE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3FE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3FE0 / 2) >> 16)
                dc.w 1
