byte_2CE448:    dc.b   0,  0,$7B,$81,$84,$8E,$7F,$87,$80,$87
                                        ; DATA XREF: ROM:off_A68   o
                dc.w sprite_16_16
                dc.w $7981
                dc.w $9500 ! ((grp_73800 / 2) & $00FF)
                dc.w $9600 ! (((grp_73800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_73800 / 2) >> 16)
                dc.w 4
