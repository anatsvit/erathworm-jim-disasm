byte_2D0AE0:    dc.b   0,  2,$6E,$7B,$91,$8E,$7F,$84,$80,$84
                                        ; DATA XREF: ROM:off_DC0   o
                dc.w sprite_32_16
                dc.w $6C81
                dc.w $9500 ! ((grp_48000 / 2) & $00FF)
                dc.w $9600 ! (((grp_48000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_48000 / 2) >> 16)
                dc.w 8
                dc.w sprite_24_8
                dc.w $6E79
                dc.w $9500 ! ((grp_1843C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_1843C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1843C0 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_16
                dc.w $8C81
                dc.w $9500 ! ((grp_B2040 / 2) & $00FF)
                dc.w $9600 ! (((grp_B2040 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B2040 / 2) >> 16)
                dc.w 2
