byte_2F021C:    dc.b   0,  2,$79,$57,$86,$87,$82,$68,$83,$68
                                        ; DATA XREF: ROM:off_25C8   o
                dc.w sprite_32_16
                dc.w $755B
                dc.w $9500 ! ((grp_54000 / 2) & $00FF)
                dc.w $9600 ! (((grp_54000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_54000 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_16
                dc.w $766B
                dc.w $9500 ! ((grp_8B580 / 2) & $00FF)
                dc.w $9600 ! (((grp_8B580 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8B580 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $866B
                dc.w $9500 ! ((grp_F15E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F15E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F15E0 / 2) >> 16)
                dc.w 1
