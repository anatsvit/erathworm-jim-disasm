byte_2DA97C:    dc.b   0,  0,$7B,$80,$83,$7E,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_14D0   o
                dc.w sprite_16_8
                dc.w $797E
                dc.w $9500 ! ((grp_CCC40 / 2) & $00FF)
                dc.w $9600 ! (((grp_CCC40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_CCC40 / 2) >> 16)
                dc.w 2
