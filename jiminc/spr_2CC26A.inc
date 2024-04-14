byte_2CC26A:    dc.b   0,  1,$82,$82,$8E,$98,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:off_714   o
                dc.w sprite_16_24
                dc.w $8088
                dc.w $9500 ! ((grp_16ED00 / 2) & $00FF)
                dc.w $9600 ! (((grp_16ED00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16ED00 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_8
                dc.w $8080
                dc.w $9500 ! ((grp_E1200 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1200 / 2) >> 16)
                dc.w 1
