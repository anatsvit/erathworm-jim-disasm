byte_2FED56:    dc.b   0,  0,$72,$7E,$8A,$80,$7E,$7F,$7F,$7F
                                        ; DATA XREF: ROM:off_34DC   o
                dc.w sprite_32_8
                dc.w $6D7C
                dc.w $9500 ! ((grp_A1D80 / 2) & $00FF)
                dc.w $9600 ! (((grp_A1D80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A1D80 / 2) >> 16)
                dc.w 4
