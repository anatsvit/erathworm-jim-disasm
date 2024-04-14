byte_2EF620:    dc.b   0,  1,$7A,$5C,$95,$65,$87,$60,$88,$60
                                        ; DATA XREF: ROM:off_2500   o
                dc.w sprite_16_8
                dc.w $795A
                dc.w $9500 ! ((grp_D9CC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9CC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9CC0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $9062
                dc.w $9500 ! ((grp_F0F40 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0F40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0F40 / 2) >> 16)
                dc.w 1
