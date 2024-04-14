byte_2ECC64:    dc.b   0,  1,$79,$79,$86,$89,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_21F0   o
                dc.w sprite_16_8
                dc.w $7A7A
                dc.w $9500 ! ((grp_D8280 / 2) & $00FF)
                dc.w $9600 ! (((grp_D8280 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D8280 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7E82
                dc.w $9500 ! ((grp_EFBC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFBC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFBC0 / 2) >> 16)
                dc.w 1
