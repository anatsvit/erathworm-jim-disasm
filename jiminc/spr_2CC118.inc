byte_2CC118:    dc.b   0,  2,$82,$82,$91,$93,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:off_6E8   o
                dc.w sprite_16_16
                dc.w $8080
                dc.w $9500 ! ((grp_72900 / 2) & $00FF)
                dc.w $9600 ! (((grp_72900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_72900 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $8090
                dc.w $9500 ! ((grp_C6940 / 2) & $00FF)
                dc.w $9600 ! (((grp_C6940 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C6940 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $9082
                dc.w $9500 ! ((grp_E1160 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1160 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1160 / 2) >> 16)
                dc.w 1
