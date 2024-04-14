byte_2FEBBE:    dc.b   0,  0,$7A,$85,$83,$8B,$7E,$88,$7F,$88
                                        ; DATA XREF: ROM:off_34AC   o
                dc.w sprite_16_16
                dc.w $7883
                dc.w $9500 ! ((grp_96300 / 2) & $00FF)
                dc.w $9600 ! (((grp_96300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_96300 / 2) >> 16)
                dc.w 4
