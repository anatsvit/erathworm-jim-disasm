byte_2D2D0A:    dc.b   0,  1,$7E,$7D,$8F,$83,$86,$80,$87,$80
                                        ; DATA XREF: ROM:off_F2C   o
                dc.w sprite_24_8
                dc.w $7B7E
                dc.w $9500 ! ((grp_184900 / 2) & $00FF)
                dc.w $9600 ! (((grp_184900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_184900 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_8
                dc.w $7A76
                dc.w $9500 ! ((grp_E4CC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E4CC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E4CC0 / 2) >> 16)
                dc.w 1
