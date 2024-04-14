byte_2D32DE:    dc.b   0,  0,$80,$83,$81,$86,$80,$84,$81,$84
                                        ; DATA XREF: ROM:00000F9C   o
                dc.w sprite_8_8
                dc.w $7C81
                dc.w $9500 ! ((grp_E46E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E46E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E46E0 / 2) >> 16)
                dc.w 1
