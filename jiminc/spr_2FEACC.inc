byte_2FEACC:    dc.b   0,  0,$7F,$8A,$82,$8D,$80,$8B,$81,$8B
                                        ; DATA XREF: ROM:off_3480   o
                dc.w sprite_8_8
                dc.w $7D88
                dc.w $9500 ! ((grp_F8FA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8FA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8FA0 / 2) >> 16)
                dc.w 1
