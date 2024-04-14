byte_2FCA3C:    dc.b   0,  0,$7C,$7A,$84,$83,$80,$7E,$81,$7E
                                        ; DATA XREF: ROM:off_3190   o
                dc.w sprite_16_16
                dc.w $7A78
                dc.w $9500 ! ((grp_93D00 / 2) & $00FF)
                dc.w $9600 ! (((grp_93D00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_93D00 / 2) >> 16)
                dc.w 4
