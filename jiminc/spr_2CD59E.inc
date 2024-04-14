byte_2CD59E:    dc.b   0,  1,$75,$72,$87,$8C,$82,$8F,$81,$8F
                                        ; DATA XREF: ROM:off_8E4   o
                dc.w sprite_24_32
                dc.w $7371
                dc.w $9500 ! ((grp_F9AC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F9AC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F9AC0 / 2) >> 16)
                dc.w $C
                dc.w sprite_16_8
                dc.w $7369
                dc.w $9500 ! ((grp_C7180 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7180 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7180 / 2) >> 16)
                dc.w 2
