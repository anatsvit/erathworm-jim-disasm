byte_2F3C1E:    dc.b   0,  0,$8F,$81,$8E,$80,$8E,$80,$8F,$80
                                        ; DATA XREF: ROM:off_282C   o
                dc.w sprite_8_8
                dc.w $7E7F
                dc.w $9500 ! ((grp_F3D80 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3D80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3D80 / 2) >> 16)
                dc.w 1
