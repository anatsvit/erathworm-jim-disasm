byte_2ECAD2:    dc.b   0,  0,$79,$7A,$87,$89,$80,$81,$81,$81
                                        ; DATA XREF: ROM:off_21B4   o
                dc.w sprite_16_16
                dc.w $7A7A
                dc.w $9500 ! ((grp_88380 / 2) & $00FF)
                dc.w $9600 ! (((grp_88380 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_88380 / 2) >> 16)
                dc.w 4
