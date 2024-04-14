byte_2EE018:    dc.b   0,  1,$7C,$81,$85,$8F,$80,$87,$81,$87
                                        ; DATA XREF: ROM:off_2350   o
                dc.w sprite_16_8
                dc.w $7B88
                dc.w $9500 ! ((grp_D9080 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9080 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9080 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7F80
                dc.w $9500 ! ((grp_F05E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F05E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F05E0 / 2) >> 16)
                dc.w 1
