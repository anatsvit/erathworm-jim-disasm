byte_2FC224:    dc.b   0,  2,$6A,$8B,$78,$9A,$71,$92,$72,$92
                                        ; DATA XREF: ROM:off_30C8   o
                dc.w sprite_8_24
                dc.w $6C89
                dc.w $9500 ! ((grp_1A0320 / 2) & $00FF)
                dc.w $9600 ! (((grp_1A0320 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1A0320 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_16
                dc.w $6491
                dc.w $9500 ! ((grp_C5200 / 2) & $00FF)
                dc.w $9600 ! (((grp_C5200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C5200 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $7489
                dc.w $9500 ! ((grp_C51C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C51C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C51C0 / 2) >> 16)
                dc.w 2
