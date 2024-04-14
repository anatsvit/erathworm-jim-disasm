byte_2FBF04:    dc.b   0,  0,$79,$7C,$87,$86,$80,$81,$81,$81
                                        ; DATA XREF: ROM:off_3048   o
                dc.w sprite_24_16
                dc.w $747A
                dc.w $9500 ! ((grp_16B700 / 2) & $00FF)
                dc.w $9600 ! (((grp_16B700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16B700 / 2) >> 16)
                dc.w 6
