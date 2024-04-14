byte_2CDA2C:    dc.b   0,  2,$85,$86,$96,$8C,$84,$8E,$85,$9C
                                        ; DATA XREF: ROM:off_958   o
                dc.w sprite_16_8
                dc.w $8187
                dc.w $9500 ! ((grp_C7C80 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7C80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7C80 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $917A
                dc.w $9500 ! ((grp_B0900 / 2) & $00FF)
                dc.w $9600 ! (((grp_B0900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B0900 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $897F
                dc.w $9500 ! ((grp_E1F20 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1F20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1F20 / 2) >> 16)
                dc.w 1
