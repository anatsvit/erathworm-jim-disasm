byte_2F81B2:    dc.b   0,  1,$74,$87,$89,$90,$7E,$8C,$7F,$8C
                                        ; DATA XREF: ROM:off_2C44   o
                dc.w sprite_24_8
                dc.w $7588
                dc.w $9500 ! ((grp_18F400 / 2) & $00FF)
                dc.w $9600 ! (((grp_18F400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_18F400 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_8
                dc.w $7890
                dc.w $9500 ! ((grp_F5B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_F5B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F5B00 / 2) >> 16)
                dc.w 1
