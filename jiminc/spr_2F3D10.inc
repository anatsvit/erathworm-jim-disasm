byte_2F3D10:    dc.b   0,  0,$90,$82,$8E,$7F,$8F,$80,$90,$80
                                        ; DATA XREF: ROM:off_2858   o
                dc.w sprite_8_8
                dc.w $7980
                dc.w $9500 ! ((grp_F3EC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3EC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3EC0 / 2) >> 16)
                dc.w 1
