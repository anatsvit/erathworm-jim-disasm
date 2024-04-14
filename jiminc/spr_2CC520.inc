byte_2CC520:    dc.b   0,  0,$7C,$76,$83,$83,$7F,$7C,$80,$7C
                                        ; DATA XREF: ROM:off_778   o
                dc.w sprite_16_24
                dc.w $7A74
                dc.w $9500 ! ((grp_16F240 / 2) & $00FF)
                dc.w $9600 ! (((grp_16F240 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16F240 / 2) >> 16)
                dc.w 6
