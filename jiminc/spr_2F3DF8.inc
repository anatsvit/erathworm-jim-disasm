byte_2F3DF8:    dc.b   0,  0,$8B,$80,$91,$83,$8E,$81,$8F,$81
                                        ; DATA XREF: ROM:off_2880   o
                dc.w sprite_16_8
                dc.w $7B7E
                dc.w $9500 ! ((grp_DC480 / 2) & $00FF)
                dc.w $9600 ! (((grp_DC480 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DC480 / 2) >> 16)
                dc.w 2
