byte_2F3C08:    dc.b   0,  0,$8F,$81,$8F,$80,$8F,$80,$90,$80
                                        ; DATA XREF: ROM:off_2828   o
                dc.w sprite_8_8
                dc.w $7D7F
                dc.w $9500 ! ((grp_F3D60 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3D60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3D60 / 2) >> 16)
                dc.w 1
