byte_2CFD84:    dc.b   0,  1,$7D,$7A,$82,$87,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_C58   o
                dc.w sprite_16_16
                dc.w $7B78
                dc.w $9500 ! ((grp_75600 / 2) & $00FF)
                dc.w $9600 ! (((grp_75600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_75600 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $7B88
                dc.w $9500 ! ((grp_E30A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E30A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E30A0 / 2) >> 16)
                dc.w 1
