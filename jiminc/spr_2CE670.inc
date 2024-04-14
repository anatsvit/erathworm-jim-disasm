byte_2CE670:    dc.b   0,  1,$79,$79,$86,$86,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_AC8   o
                dc.w sprite_16_16
                dc.w $7777
                dc.w $9500 ! ((grp_73980 / 2) & $00FF)
                dc.w $9600 ! (((grp_73980 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_73980 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $7E81
                dc.w $9500 ! ((grp_C75C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C75C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C75C0 / 2) >> 16)
                dc.w 2
