byte_2EECEC:    dc.b   0,  1,$79,$87,$86,$8B,$7F,$89,$80,$89
                                        ; DATA XREF: ROM:off_2418   o
                dc.w sprite_32_8
                dc.w $7087
                dc.w $9500 ! ((grp_9E280 / 2) & $00FF)
                dc.w $9600 ! (((grp_9E280 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_9E280 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $7A7F
                dc.w $9500 ! ((grp_D95C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_D95C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D95C0 / 2) >> 16)
                dc.w 2
