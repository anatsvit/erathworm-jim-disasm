byte_2FC002:    dc.b   0,  1,$7E,$7F,$82,$83,$80,$81,$81,$81
                                        ; DATA XREF: ROM:off_3074   o
                dc.w sprite_8_16
                dc.w $7F7D
                dc.w $9500 ! ((grp_C4EC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C4EC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C4EC0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $777D
                dc.w $9500 ! ((grp_F7B40 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7B40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7B40 / 2) >> 16)
                dc.w 1
