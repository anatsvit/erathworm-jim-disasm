byte_2ECAE8:    dc.b   0,  0,$79,$7A,$86,$89,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_21B8   o
                dc.w sprite_16_16
                dc.w $797A
                dc.w $9500 ! ((grp_88400 / 2) & $00FF)
                dc.w $9600 ! (((grp_88400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_88400 / 2) >> 16)
                dc.w 4
