byte_2CFE0C:    dc.b   0,  1,$7C,$7A,$83,$87,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_C68   o
                dc.w sprite_16_16
                dc.w $7A78
                dc.w $9500 ! ((grp_75800 / 2) & $00FF)
                dc.w $9600 ! (((grp_75800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_75800 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $7C88
                dc.w $9500 ! ((grp_E3120 / 2) & $00FF)
                dc.w $9600 ! (((grp_E3120 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E3120 / 2) >> 16)
                dc.w 1
