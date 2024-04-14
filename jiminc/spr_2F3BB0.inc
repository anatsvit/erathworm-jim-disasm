byte_2F3BB0:    dc.b   0,  0,$90,$81,$90,$80,$90,$80,$91,$80
                                        ; DATA XREF: ROM:off_2818   o
                dc.w sprite_8_8
                dc.w $797F
                dc.w $9500 ! ((grp_F3CE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3CE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3CE0 / 2) >> 16)
                dc.w 1
