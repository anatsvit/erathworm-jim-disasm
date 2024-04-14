byte_2FBE0A:    dc.b   0,  0,$83,$80,$7F,$7E,$81,$7F,$82,$7F
                                        ; DATA XREF: ROM:off_302C   o
                dc.w sprite_8_8
                dc.w $817E
                dc.w $9500 ! ((grp_F7A80 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7A80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7A80 / 2) >> 16)
                dc.w 1
