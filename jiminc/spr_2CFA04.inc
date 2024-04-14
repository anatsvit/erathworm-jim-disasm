byte_2CFA04:    dc.b   0,  0,$77,$80,$87,$83,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_BD8   o
                dc.w sprite_24_8
                dc.w $757E
                dc.w $9500 ! ((grp_183E20 / 2) & $00FF)
                dc.w $9600 ! (((grp_183E20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_183E20 / 2) >> 16)
                dc.w 3
