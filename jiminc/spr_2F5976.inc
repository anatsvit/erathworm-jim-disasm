byte_2F5976:    dc.b   0,  4,$66,$84,$9F,$8E,$82,$89,$83,$89
                                        ; DATA XREF: ROM:off_2AFC   o
                dc.w sprite_16_16
                dc.w $6C81
                dc.w $9500 ! ((grp_8EC80 / 2) & $00FF)
                dc.w $9600 ! (((grp_8EC80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8EC80 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_16
                dc.w $7C81
                dc.w $9500 ! ((grp_8EE00 / 2) & $00FF)
                dc.w $9600 ! (((grp_8EE00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8EE00 / 2) >> 16)
                dc.w 4
                dc.w sprite_24_8
                dc.w $8C88
                dc.w $9500 ! ((grp_18EC80 / 2) & $00FF)
                dc.w $9600 ! (((grp_18EC80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_18EC80 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_8
                dc.w $6487
                dc.w $9500 ! ((grp_F49C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F49C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F49C0 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $8C80
                dc.w $9500 ! ((grp_F4840 / 2) & $00FF)
                dc.w $9600 ! (((grp_F4840 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F4840 / 2) >> 16)
                dc.w 1
