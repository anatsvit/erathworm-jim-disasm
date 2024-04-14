byte_2FD13E:    dc.b   0,  1,$7F,$77,$8E,$89,$86,$80,$87,$80
                                        ; DATA XREF: ROM:off_32A4   o
                dc.w sprite_16_24
                dc.w $7D75
                dc.w $9500 ! ((grp_181A80 / 2) & $00FF)
                dc.w $9600 ! (((grp_181A80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_181A80 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_8
                dc.w $8D77
                dc.w $9500 ! ((grp_F8140 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8140 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8140 / 2) >> 16)
                dc.w 1
