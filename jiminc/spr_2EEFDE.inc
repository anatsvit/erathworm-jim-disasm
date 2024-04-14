byte_2EEFDE:    dc.b   0,  2,$79,$6B,$85,$8E,$7F,$84,$80,$84
                                        ; DATA XREF: ROM:off_244C   o
                dc.w sprite_16_16
                dc.w $777C
                dc.w $9500 ! ((grp_8A080 / 2) & $00FF)
                dc.w $9600 ! (((grp_8A080 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8A080 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $788C
                dc.w $9500 ! ((grp_D9640 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9640 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9640 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $877F
                dc.w $9500 ! ((grp_F0C80 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0C80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0C80 / 2) >> 16)
                dc.w 1
