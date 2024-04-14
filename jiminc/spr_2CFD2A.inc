byte_2CFD2A:    dc.b   0,  1,$7C,$7B,$83,$87,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_C4C   o
                dc.w sprite_16_16
                dc.w $7A79
                dc.w $9500 ! ((grp_75500 / 2) & $00FF)
                dc.w $9600 ! (((grp_75500 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_75500 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $7A89
                dc.w $9500 ! ((grp_E3060 / 2) & $00FF)
                dc.w $9600 ! (((grp_E3060 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E3060 / 2) >> 16)
                dc.w 1
