byte_2CF842:    dc.b   0,  2,$7D,$72,$82,$90,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_B9C   o
                dc.w sprite_8_32
                dc.w $7D70
                dc.w $9500 ! ((grp_A3600 / 2) & $00FF)
                dc.w $9600 ! (((grp_A3600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A3600 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_16
                dc.w $757B
                dc.w $9500 ! ((grp_B1680 / 2) & $00FF)
                dc.w $9600 ! (((grp_B1680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B1680 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7C90
                dc.w $9500 ! ((grp_E2DC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E2DC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E2DC0 / 2) >> 16)
                dc.w 1
