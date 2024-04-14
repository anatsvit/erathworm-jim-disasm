byte_2FC866:    dc.b   0,  0,$72,$73,$8C,$8B,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_314C   o
                dc.w sprite_32_16
                dc.w $6F71
                dc.w $9500 ! ((grp_58C00 / 2) & $00FF)
                dc.w $9600 ! (((grp_58C00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_58C00 / 2) >> 16)
                dc.w 8
