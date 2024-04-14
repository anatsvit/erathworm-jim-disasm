byte_2CF776:    dc.b   0,  1,$7A,$72,$84,$92,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_B84   o
                dc.w sprite_16_32
                dc.w $7870
                dc.w $9500 ! ((grp_5C700 / 2) & $00FF)
                dc.w $9600 ! (((grp_5C700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_5C700 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_8
                dc.w $7890
                dc.w $9500 ! ((grp_C8780 / 2) & $00FF)
                dc.w $9600 ! (((grp_C8780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C8780 / 2) >> 16)
                dc.w 2
