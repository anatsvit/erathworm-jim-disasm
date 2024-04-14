byte_2EC9DC:    dc.b   0,  1,$78,$7B,$87,$87,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_2190   o
                dc.w sprite_16_8
                dc.w $797B
                dc.w $9500 ! ((grp_D8040 / 2) & $00FF)
                dc.w $9600 ! (((grp_D8040 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D8040 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7883
                dc.w $9500 ! ((grp_EFAA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFAA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFAA0 / 2) >> 16)
                dc.w 1
