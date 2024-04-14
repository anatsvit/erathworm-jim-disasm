byte_2F5586:    dc.b   0,  1,$7C,$7B,$81,$84,$7E,$7F,$7F,$7F
                                        ; DATA XREF: ROM:off_2AB4   o
                dc.w sprite_16_8
                dc.w $7679
                dc.w $9500 ! ((grp_DCBC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_DCBC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DCBC0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7C81
                dc.w $9500 ! ((grp_F4820 / 2) & $00FF)
                dc.w $9600 ! (((grp_F4820 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F4820 / 2) >> 16)
                dc.w 1
