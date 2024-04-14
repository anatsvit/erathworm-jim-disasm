byte_2FCBB2:    dc.b   0,  0,$78,$7C,$87,$84,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_31D4   o
                dc.w sprite_24_16
                dc.w $737A
                dc.w $9500 ! ((grp_16CC00 / 2) & $00FF)
                dc.w $9600 ! (((grp_16CC00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16CC00 / 2) >> 16)
                dc.w 6
