byte_2CD322:    dc.b   0,  1,$83,$88,$90,$8C,$81,$A1,$82,$A1
                                        ; DATA XREF: ROM:off_89C   o
                dc.w sprite_16_16
                dc.w $8084
                dc.w $9500 ! ((grp_73C00 / 2) & $00FF)
                dc.w $9600 ! (((grp_73C00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_73C00 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $9084
                dc.w $9500 ! ((grp_E1D20 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1D20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1D20 / 2) >> 16)
                dc.w 1
