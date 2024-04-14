byte_2EDF3A:    dc.b   0,  0,$7F,$88,$83,$8F,$81,$8C,$82,$8C
                                        ; DATA XREF: ROM:off_232C   o
                dc.w sprite_8_8
                dc.w $7C89
                dc.w $9500 ! ((grp_F06C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F06C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F06C0 / 2) >> 16)
                dc.w 1
