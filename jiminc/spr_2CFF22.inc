byte_2CFF22:    dc.b   0,  0,$7C,$84,$83,$81,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_C94   o
                dc.w sprite_16_8
                dc.w $7A82
                dc.w $9500 ! ((grp_C8A80 / 2) & $00FF)
                dc.w $9600 ! (((grp_C8A80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C8A80 / 2) >> 16)
                dc.w 2
