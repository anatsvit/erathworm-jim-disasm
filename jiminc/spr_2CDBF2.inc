byte_2CDBF2:    dc.b   0,  1,$7B,$7F,$83,$88,$7F,$83,$80,$83
                                        ; DATA XREF: ROM:off_98C   o
                dc.w sprite_8_16
                dc.w $797D
                dc.w $9500 ! ((grp_B0340 / 2) & $00FF)
                dc.w $9600 ! (((grp_B0340 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B0340 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8180
                dc.w $9500 ! ((grp_E18A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E18A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E18A0 / 2) >> 16)
                dc.w 1
