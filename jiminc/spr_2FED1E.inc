byte_2FED1E:    dc.b   0,  0,$73,$7F,$8A,$81,$7E,$80,$7F,$80
                                        ; DATA XREF: ROM:off_34D4   o
                dc.w sprite_32_8
                dc.w $717D
                dc.w $9500 ! ((grp_A1C80 / 2) & $00FF)
                dc.w $9600 ! (((grp_A1C80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A1C80 / 2) >> 16)
                dc.w 4
