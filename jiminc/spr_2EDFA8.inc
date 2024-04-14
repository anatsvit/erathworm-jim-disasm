byte_2EDFA8:    dc.b   0,  1,$7C,$83,$86,$8F,$81,$89,$82,$89
                                        ; DATA XREF: ROM:off_2340   o
                dc.w sprite_16_8
                dc.w $7A88
                dc.w $9500 ! ((grp_D9000 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9000 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7E80
                dc.w $9500 ! ((grp_F05A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F05A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F05A0 / 2) >> 16)
                dc.w 1
