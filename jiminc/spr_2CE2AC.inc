byte_2CE2AC:    dc.b   0,  1,$82,$8A,$86,$8F,$84,$8C,$85,$8C
                                        ; DATA XREF: ROM:off_A28   o
                dc.w sprite_8_16
                dc.w $8088
                dc.w $9500 ! ((grp_B0480 / 2) & $00FF)
                dc.w $9600 ! (((grp_B0480 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B0480 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $888F
                dc.w $9500 ! ((grp_E1A20 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1A20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1A20 / 2) >> 16)
                dc.w 1
