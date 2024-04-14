byte_2EDF50:    dc.b   0,  0,$7E,$89,$85,$8F,$81,$8C,$82,$8C
                                        ; DATA XREF: ROM:off_2330   o
                dc.w sprite_8_8
                dc.w $7E8A
                dc.w $9500 ! ((grp_F06E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F06E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F06E0 / 2) >> 16)
                dc.w 1
