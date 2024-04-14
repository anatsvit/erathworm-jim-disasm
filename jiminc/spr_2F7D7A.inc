byte_2F7D7A:    dc.b   0,  1,$79,$7A,$87,$86,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_2BCC   o
                dc.w sprite_8_8
                dc.w $7A7D
                dc.w $9500 ! ((grp_F5B20 / 2) & $00FF)
                dc.w $9600 ! (((grp_F5B20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F5B20 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $827C
                dc.w $9500 ! ((grp_F5840 / 2) & $00FF)
                dc.w $9600 ! (((grp_F5840 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F5840 / 2) >> 16)
                dc.w 1
