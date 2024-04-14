byte_2CFBF2:    dc.b   0,  1,$77,$7E,$88,$83,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_C1C   o
                dc.w sprite_16_16
                dc.w $757C
                dc.w $9500 ! ((grp_75180 / 2) & $00FF)
                dc.w $9600 ! (((grp_75180 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_75180 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $857C
                dc.w $9500 ! ((grp_E2FE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E2FE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E2FE0 / 2) >> 16)
                dc.w 1
