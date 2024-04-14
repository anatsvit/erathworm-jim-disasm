byte_2CFF0C:    dc.b   0,  0,$7C,$82,$83,$83,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_C90   o
                dc.w sprite_16_8
                dc.w $7A80
                dc.w $9500 ! ((grp_C8A40 / 2) & $00FF)
                dc.w $9600 ! (((grp_C8A40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C8A40 / 2) >> 16)
                dc.w 2
