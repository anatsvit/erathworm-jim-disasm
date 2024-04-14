byte_2FE940:    dc.b   0,  1,$7C,$86,$81,$8A,$7E,$88,$7F,$88
                                        ; DATA XREF: ROM:off_3450   o
                dc.w sprite_8_16
                dc.w $7C84
                dc.w $9500 ! ((grp_C6280 / 2) & $00FF)
                dc.w $9600 ! (((grp_C6280 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C6280 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7484
                dc.w $9500 ! ((grp_F8E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8E00 / 2) >> 16)
                dc.w 1
