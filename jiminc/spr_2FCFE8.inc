byte_2FCFE8:    dc.b   0,  3,$7F,$53,$9B,$60,$8D,$59,$8E,$59
                                        ; DATA XREF: ROM:off_3280   o
                dc.w sprite_32_8
                dc.w $7661
                dc.w $9500 ! ((grp_A0A80 / 2) & $00FF)
                dc.w $9600 ! (((grp_A0A80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A0A80 / 2) >> 16)
                dc.w 4
                dc.w sprite_24_8
                dc.w $7E59
                dc.w $9500 ! ((grp_190DE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_190DE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_190DE0 / 2) >> 16)
                dc.w 3
                dc.w sprite_16_8
                dc.w $8651
                dc.w $9500 ! ((grp_DF980 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF980 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF980 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $9655
                dc.w $9500 ! ((grp_C5980 / 2) & $00FF)
                dc.w $9600 ! (((grp_C5980 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C5980 / 2) >> 16)
                dc.w 2
