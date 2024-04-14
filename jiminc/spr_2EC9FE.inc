byte_2EC9FE:    dc.b   0,  1,$78,$7C,$87,$85,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_2194   o
                dc.w sprite_16_8
                dc.w $787C
                dc.w $9500 ! ((grp_D8080 / 2) & $00FF)
                dc.w $9600 ! (((grp_D8080 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D8080 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7484
                dc.w $9500 ! ((grp_EFAC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFAC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFAC0 / 2) >> 16)
                dc.w 1
