byte_2FBD64:    dc.b   0,  0,$7D,$7F,$81,$85,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_3010   o
                dc.w sprite_16_16
                dc.w $777D
                dc.w $9500 ! ((grp_92400 / 2) & $00FF)
                dc.w $9600 ! (((grp_92400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_92400 / 2) >> 16)
                dc.w 4
