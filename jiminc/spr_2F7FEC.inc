byte_2F7FEC:    dc.b   0,  0,$7C,$78,$87,$84,$81,$7E,$82,$7E
                                        ; DATA XREF: ROM:00002BF8   o
                dc.w sprite_16_16
                dc.w $7D79
                dc.w $9500 ! ((grp_90200 / 2) & $00FF)
                dc.w $9600 ! (((grp_90200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_90200 / 2) >> 16)
                dc.w 4
