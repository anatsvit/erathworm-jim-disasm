byte_2FE962:    dc.b   0,  1,$7E,$86,$84,$8A,$81,$88,$82,$88
                                        ; DATA XREF: ROM:off_3454   o
                dc.w sprite_8_8
                dc.w $7C85
                dc.w $9500 ! ((grp_F8E40 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8E40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8E40 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $8484
                dc.w $9500 ! ((grp_F8E20 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8E20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8E20 / 2) >> 16)
                dc.w 1
