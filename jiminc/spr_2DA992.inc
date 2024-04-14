byte_2DA992:    dc.b   0,  0,$7C,$81,$83,$7D,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_14D4   o
                dc.w sprite_16_8
                dc.w $7A7F
                dc.w $9500 ! ((grp_CCC80 / 2) & $00FF)
                dc.w $9600 ! (((grp_CCC80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_CCC80 / 2) >> 16)
                dc.w 2
