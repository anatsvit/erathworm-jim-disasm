byte_2F3CCE:    dc.b   0,  0,$90,$82,$8E,$80,$8F,$81,$90,$81
                                        ; DATA XREF: ROM:off_284C   o
                dc.w sprite_8_8
                dc.w $7980
                dc.w $9500 ! ((grp_F3E60 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3E60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3E60 / 2) >> 16)
                dc.w 1
