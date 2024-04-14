byte_2CFC78:    dc.b   0,  0,$78,$80,$87,$83,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_C30   o
                dc.w sprite_24_8
                dc.w $767E
                dc.w $9500 ! ((grp_184000 / 2) & $00FF)
                dc.w $9600 ! (((grp_184000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_184000 / 2) >> 16)
                dc.w 3
