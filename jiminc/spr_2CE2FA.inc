byte_2CE2FA:    dc.b   0,  1,$84,$8A,$8A,$8E,$87,$8C,$88,$8C
                                        ; DATA XREF: ROM:off_A34   o
                dc.w sprite_16_8
                dc.w $8288
                dc.w $9500 ! ((grp_C7340 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7340 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7340 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8B90
                dc.w $9500 ! ((grp_E1900 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1900 / 2) >> 16)
                dc.w 1
