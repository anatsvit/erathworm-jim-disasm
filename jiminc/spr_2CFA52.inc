byte_2CFA52:    dc.b   0,  0,$7E,$78,$81,$8D,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_BE4   o
                dc.w sprite_8_32
                dc.w $7C76
                dc.w $9500 ! ((grp_A3780 / 2) & $00FF)
                dc.w $9600 ! (((grp_A3780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A3780 / 2) >> 16)
                dc.w 4
