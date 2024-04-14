byte_2FBEE2:    dc.b   0,  1,$78,$7B,$87,$87,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_3044   o
                dc.w sprite_24_16
                dc.w $7679
                dc.w $9500 ! ((grp_16B640 / 2) & $00FF)
                dc.w $9600 ! (((grp_16B640 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16B640 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_8
                dc.w $7889
                dc.w $9500 ! ((grp_F7B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7B00 / 2) >> 16)
                dc.w 1
