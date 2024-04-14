byte_2F3D7E:    dc.b   0,  0,$90,$82,$8D,$7F,$8E,$80,$8F,$80
                                        ; DATA XREF: ROM:off_286C   o
                dc.w sprite_8_8
                dc.w $7F80
                dc.w $9500 ! ((grp_F3F60 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3F60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3F60 / 2) >> 16)
                dc.w 1
