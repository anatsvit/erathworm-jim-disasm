byte_2CEB5E:    dc.b   0,  3,$7E,$45,$88,$7F,$83,$62,$84,$62
                                        ; DATA XREF: ROM:off_B0C   o
                dc.w sprite_8_32
                dc.w $7C63
                dc.w $9500 ! ((grp_A2600 / 2) & $00FF)
                dc.w $9600 ! (((grp_A2600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A2600 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $7C43
                dc.w $9500 ! ((grp_C82C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C82C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C82C0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $7F53
                dc.w $9500 ! ((grp_B0F40 / 2) & $00FF)
                dc.w $9600 ! (((grp_B0F40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B0F40 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $844B
                dc.w $9500 ! ((grp_E2600 / 2) & $00FF)
                dc.w $9600 ! (((grp_E2600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E2600 / 2) >> 16)
                dc.w 1
