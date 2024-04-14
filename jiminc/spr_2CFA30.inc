byte_2CFA30:    dc.b   0,  1,$7C,$77,$83,$8C,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_BE0   o
                dc.w sprite_8_32
                dc.w $7A75
                dc.w $9500 ! ((grp_A3700 / 2) & $00FF)
                dc.w $9600 ! (((grp_A3700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A3700 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $8280
                dc.w $9500 ! ((grp_E2F20 / 2) & $00FF)
                dc.w $9600 ! (((grp_E2F20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E2F20 / 2) >> 16)
                dc.w 1
