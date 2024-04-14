byte_2FCB9C:    dc.b   0,  0,$7F,$7B,$81,$84,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_31D0   o
                dc.w sprite_8_16
                dc.w $7C79
                dc.w $9500 ! ((grp_C57C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C57C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C57C0 / 2) >> 16)
                dc.w 2
