byte_2EF400:    dc.b   0,  3,$65,$68,$95,$9E,$7E,$80,$7F,$80
                                        ; DATA XREF: ROM:off_24D8   o
                dc.w sprite_16_8
                dc.w $6E74
                dc.w $9500 ! ((grp_D9900 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9900 / 2) >> 16)
                dc.w 2
                dc.w sprite_16_8
                dc.w $767C
                dc.w $9500 ! ((grp_D9940 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9940 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9940 / 2) >> 16)
                dc.w 2
                dc.w sprite_16_8
                dc.w $7F84
                dc.w $9500 ! ((grp_D9980 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9980 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9980 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $868C
                dc.w $9500 ! ((grp_F0E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0E00 / 2) >> 16)
                dc.w 1
