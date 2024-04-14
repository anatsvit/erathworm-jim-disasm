byte_2CDA7C:    dc.b   0,  0,$7D,$7E,$89,$80,$83,$7F,$84,$7F
                                        ; DATA XREF: ROM:off_960   o
                dc.w sprite_16_8
                dc.w $7B7C
                dc.w $9500 ! ((grp_C7280 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7280 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7280 / 2) >> 16)
                dc.w 2
