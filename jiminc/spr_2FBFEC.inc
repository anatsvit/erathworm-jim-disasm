byte_2FBFEC:    dc.b   0,  0,$7E,$7F,$83,$81,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_3070   o
                dc.w sprite_16_8
                dc.w $777D
                dc.w $9500 ! ((grp_DF480 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF480 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF480 / 2) >> 16)
                dc.w 2
