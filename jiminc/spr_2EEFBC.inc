byte_2EEFBC:    dc.b   0,  1,$79,$6B,$85,$8E,$7F,$84,$80,$84
                                        ; DATA XREF: ROM:off_2448   o
                dc.w sprite_16_24
                dc.w $7878
                dc.w $9500 ! ((grp_17C380 / 2) & $00FF)
                dc.w $9600 ! (((grp_17C380 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_17C380 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_8
                dc.w $7D90
                dc.w $9500 ! ((grp_F0CC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0CC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0CC0 / 2) >> 16)
                dc.w 1
