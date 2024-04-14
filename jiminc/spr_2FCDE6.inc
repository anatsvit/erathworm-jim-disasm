byte_2FCDE6:    dc.b   0,  0,$7B,$7E,$85,$80,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_3234   o
                dc.w sprite_16_8
                dc.w $797C
                dc.w $9500 ! ((grp_DF8C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF8C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF8C0 / 2) >> 16)
                dc.w 2
