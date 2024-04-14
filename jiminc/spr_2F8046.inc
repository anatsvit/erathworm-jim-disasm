byte_2F8046:    dc.b   0,  0,$7C,$7C,$88,$80,$81,$7E,$82,$7E
                                        ; DATA XREF: ROM:off_2C04   o
                dc.w sprite_16_8
                dc.w $777D
                dc.w $9500 ! ((grp_DD680 / 2) & $00FF)
                dc.w $9600 ! (((grp_DD680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DD680 / 2) >> 16)
                dc.w 2
