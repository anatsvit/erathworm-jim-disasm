byte_2FC0A8:    dc.b   0,  1,$7C,$8F,$83,$A2,$7F,$98,$80,$98
                                        ; DATA XREF: ROM:off_3090   o
                dc.w sprite_16_16
                dc.w $7A8D
                dc.w $9500 ! ((grp_92B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_92B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_92B00 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $7C9D
                dc.w $9500 ! ((grp_F7D60 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7D60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7D60 / 2) >> 16)
                dc.w 1
