byte_2F3BC6:    dc.b   0,  0,$90,$82,$8F,$81,$8F,$81,$90,$81
                                        ; DATA XREF: ROM:off_281C   o
                dc.w sprite_8_8
                dc.w $7D80
                dc.w $9500 ! ((grp_F3D00 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3D00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3D00 / 2) >> 16)
                dc.w 1
