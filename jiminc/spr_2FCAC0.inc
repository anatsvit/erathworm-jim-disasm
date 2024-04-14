byte_2FCAC0:    dc.b   0,  0,$7C,$7A,$84,$83,$80,$7E,$81,$7E
                                        ; DATA XREF: ROM:off_31A8   o
                dc.w sprite_16_16
                dc.w $7A78
                dc.w $9500 ! ((grp_94000 / 2) & $00FF)
                dc.w $9600 ! (((grp_94000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94000 / 2) >> 16)
                dc.w 4
