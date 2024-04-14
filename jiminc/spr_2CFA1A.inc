byte_2CFA1A:    dc.b   0,  0,$72,$80,$8C,$83,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_BDC   o
                dc.w sprite_32_8
                dc.w $707E
                dc.w $9500 ! ((grp_97380 / 2) & $00FF)
                dc.w $9600 ! (((grp_97380 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_97380 / 2) >> 16)
                dc.w 4
