byte_2DA966:    dc.b   0,  0,$7B,$7F,$83,$80,$7F,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_14CC   o
                dc.w sprite_16_8
                dc.w $797D
                dc.w $9500 ! ((grp_CAF80 / 2) & $00FF)
                dc.w $9600 ! (((grp_CAF80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_CAF80 / 2) >> 16)
                dc.w 2
