byte_2D334C:    dc.b   0,  0,$82,$83,$81,$84,$81,$83,$82,$83
                                        ; DATA XREF: ROM:00000FB0   o
                dc.w sprite_8_8
                dc.w $8081
                dc.w $9500 ! ((grp_E4700 / 2) & $00FF)
                dc.w $9600 ! (((grp_E4700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E4700 / 2) >> 16)
                dc.w 1
