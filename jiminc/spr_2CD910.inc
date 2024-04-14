byte_2CD910:    dc.b   0,  1,$82,$86,$8F,$8E,$84,$8E,$82,$9F
                                        ; DATA XREF: ROM:off_938   o
                dc.w sprite_16_16
                dc.w $8086
                dc.w $9500 ! ((grp_74000 / 2) & $00FF)
                dc.w $9600 ! (((grp_74000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_74000 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $8C7E
                dc.w $9500 ! ((grp_E1F60 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1F60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1F60 / 2) >> 16)
                dc.w 1
