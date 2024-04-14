byte_2FCC0A:    dc.b   0,  0,$7E,$7C,$82,$84,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_31E4   o
                dc.w sprite_16_16
                dc.w $767A
                dc.w $9500 ! ((grp_94400 / 2) & $00FF)
                dc.w $9600 ! (((grp_94400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94400 / 2) >> 16)
                dc.w 4
