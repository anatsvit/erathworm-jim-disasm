byte_2F54BC:    dc.b   0,  1,$7D,$7F,$82,$83,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_2A98   o
                dc.w sprite_8_16
                dc.w $817D
                dc.w $9500 ! ((grp_C1EC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C1EC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C1EC0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $797D
                dc.w $9500 ! ((grp_F4740 / 2) & $00FF)
                dc.w $9600 ! (((grp_F4740 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F4740 / 2) >> 16)
                dc.w 1
