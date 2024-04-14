byte_2F4774:    dc.b   0,  0,$7F,$7C,$82,$84,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_29C8   o
                dc.w sprite_8_16
                dc.w $7D7A
                dc.w $9500 ! ((grp_C15C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C15C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C15C0 / 2) >> 16)
                dc.w 2
