byte_2FC024:    dc.b   0,  0,$7F,$7F,$81,$83,$80,$81,$81,$81
                                        ; DATA XREF: ROM:off_3078   o
                dc.w sprite_8_16
                dc.w $7D7D
                dc.w $9500 ! ((grp_C4F00 / 2) & $00FF)
                dc.w $9600 ! (((grp_C4F00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C4F00 / 2) >> 16)
                dc.w 2
