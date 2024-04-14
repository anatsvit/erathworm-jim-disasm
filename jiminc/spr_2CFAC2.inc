byte_2CFAC2:    dc.b   0,  0,$77,$7F,$88,$83,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_BF4   o
                dc.w sprite_24_8
                dc.w $757D
                dc.w $9500 ! ((grp_183EE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_183EE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_183EE0 / 2) >> 16)
                dc.w 3
