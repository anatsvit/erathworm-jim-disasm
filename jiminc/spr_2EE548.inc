byte_2EE548:    dc.b   0,  2,$7A,$57,$85,$7E,$7F,$6A,$80,$6A
                                        ; DATA XREF: ROM:off_23A0   o
                dc.w sprite_8_32
                dc.w $805D
                dc.w $9500 ! ((grp_AB400 / 2) & $00FF)
                dc.w $9600 ! (((grp_AB400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_AB400 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $7856
                dc.w $9500 ! ((grp_D9140 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9140 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9140 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7F7D
                dc.w $9500 ! ((grp_F0760 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0760 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0760 / 2) >> 16)
                dc.w 1
