byte_2F5570:    dc.b   0,  0,$79,$83,$84,$84,$7E,$83,$7F,$83
                                        ; DATA XREF: ROM:off_2AB0   o
                dc.w sprite_16_8
                dc.w $7781
                dc.w $9500 ! ((grp_DCB80 / 2) & $00FF)
                dc.w $9600 ! (((grp_DCB80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DCB80 / 2) >> 16)
                dc.w 2
