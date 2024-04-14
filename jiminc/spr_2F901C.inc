byte_2F901C:    dc.b   0,  1,$71,$41,$8E,$C0,$7F,$9F,$80,$9F
                                        ; DATA XREF: ROM:off_2CF8   o
                dc.w sprite_32_32
                dc.w $7080
                dc.w $9500 ! ((grp_40C00 / 2) & $00FF)
                dc.w $9600 ! (((grp_40C00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_40C00 / 2) >> 16)
                dc.w $10
                dc.w sprite_16_32
                dc.w $78A0
                dc.w $9500 ! ((grp_6F700 / 2) & $00FF)
                dc.w $9600 ! (((grp_6F700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_6F700 / 2) >> 16)
                dc.w 8
