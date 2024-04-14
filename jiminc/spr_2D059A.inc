byte_2D059A:    dc.b   0,  0,$78,$7E,$84,$81,$7E,$7F,$7F,$7F
                                        ; DATA XREF: ROM:off_D3C   o
                dc.w sprite_16_8
                dc.w $767C
                dc.w $9500 ! ((grp_C8CC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C8CC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C8CC0 / 2) >> 16)
                dc.w 2
