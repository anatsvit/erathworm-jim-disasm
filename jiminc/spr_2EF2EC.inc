byte_2EF2EC:    dc.b   0,  2,$76,$85,$87,$8D,$7E,$89,$7F,$89
                                        ; DATA XREF: ROM:off_24C0   o
                dc.w sprite_8_16
                dc.w $7B83
                dc.w $9500 ! ((grp_BF940 / 2) & $00FF)
                dc.w $9600 ! (((grp_BF940 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_BF940 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7489
                dc.w $9500 ! ((grp_F1400 / 2) & $00FF)
                dc.w $9600 ! (((grp_F1400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F1400 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $8283
                dc.w $9500 ! ((grp_F1420 / 2) & $00FF)
                dc.w $9600 ! (((grp_F1420 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F1420 / 2) >> 16)
                dc.w 1
