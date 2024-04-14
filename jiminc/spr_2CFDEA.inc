byte_2CFDEA:    dc.b   0,  1,$7C,$79,$83,$87,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_C64   o
                dc.w sprite_16_16
                dc.w $7A77
                dc.w $9500 ! ((grp_75780 / 2) & $00FF)
                dc.w $9600 ! (((grp_75780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_75780 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $7A87
                dc.w $9500 ! ((grp_E3100 / 2) & $00FF)
                dc.w $9600 ! (((grp_E3100 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E3100 / 2) >> 16)
                dc.w 1
