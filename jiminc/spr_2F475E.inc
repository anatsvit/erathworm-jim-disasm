byte_2F475E:    dc.b   0,  0,$7F,$7C,$83,$84,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_29C4   o
                dc.w sprite_16_16
                dc.w $797A
                dc.w $9500 ! ((grp_8DE80 / 2) & $00FF)
                dc.w $9600 ! (((grp_8DE80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8DE80 / 2) >> 16)
                dc.w 4
