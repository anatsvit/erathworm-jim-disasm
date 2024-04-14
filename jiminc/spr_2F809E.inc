byte_2F809E:    dc.b   0,  1,$79,$87,$87,$92,$80,$8D,$81,$8D
                                        ; DATA XREF: ROM:off_2C14   o
                dc.w sprite_16_8
                dc.w $7A89
                dc.w $9500 ! ((grp_DD700 / 2) & $00FF)
                dc.w $9600 ! (((grp_DD700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DD700 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8391
                dc.w $9500 ! ((grp_F5A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_F5A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F5A00 / 2) >> 16)
                dc.w 1
