byte_2EF2CA:    dc.b   0,  1,$78,$84,$87,$8F,$7F,$89,$80,$89
                                        ; DATA XREF: ROM:off_24BC   o
                dc.w sprite_24_8
                dc.w $7782
                dc.w $9500 ! ((grp_18DA80 / 2) & $00FF)
                dc.w $9600 ! (((grp_18DA80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_18DA80 / 2) >> 16)
                dc.w 3
                dc.w sprite_16_8
                dc.w $768A
                dc.w $9500 ! ((grp_DA1C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_DA1C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DA1C0 / 2) >> 16)
                dc.w 2
