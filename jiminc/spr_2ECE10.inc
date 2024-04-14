byte_2ECE10:    dc.b   0,  1,$74,$81,$8A,$87,$7E,$84,$7F,$84
                                        ; DATA XREF: ROM:off_2228   o
                dc.w sprite_24_8
                dc.w $7A82
                dc.w $9500 ! ((grp_18C880 / 2) & $00FF)
                dc.w $9600 ! (((grp_18C880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_18C880 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_8
                dc.w $727F
                dc.w $9500 ! ((grp_EFD40 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFD40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFD40 / 2) >> 16)
                dc.w 1
