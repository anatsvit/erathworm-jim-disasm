byte_2CCE80:    dc.b   0,  0,$7D,$80,$83,$81,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_838   o
                dc.w sprite_16_8
                dc.w $7B7E
                dc.w $9500 ! ((grp_C7080 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7080 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7080 / 2) >> 16)
                dc.w 2
