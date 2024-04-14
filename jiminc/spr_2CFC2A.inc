byte_2CFC2A:    dc.b   0,  1,$77,$7F,$87,$85,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_C24   o
                dc.w sprite_16_16
                dc.w $757D
                dc.w $9500 ! ((grp_75200 / 2) & $00FF)
                dc.w $9600 ! (((grp_75200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_75200 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $857D
                dc.w $9500 ! ((grp_E3000 / 2) & $00FF)
                dc.w $9600 ! (((grp_E3000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E3000 / 2) >> 16)
                dc.w 1
