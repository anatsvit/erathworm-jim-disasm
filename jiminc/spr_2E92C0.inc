byte_2E92C0:    dc.b   0,  0,$79,$78,$84,$97,$7E,$81,$7F,$81
                                        ; DATA XREF: ROM:off_1E40   o
                dc.w sprite_16_8
                dc.w $777F
                dc.w $9500 ! ((grp_D6CC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_D6CC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D6CC0 / 2) >> 16)
                dc.w 2
