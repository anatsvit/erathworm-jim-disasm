byte_2CF7DC:    dc.b   0,  1,$7A,$72,$84,$95,$7F,$83,$80,$83
                                        ; DATA XREF: ROM:off_B90   o
                dc.w sprite_16_32
                dc.w $7870
                dc.w $9500 ! ((grp_5CA00 / 2) & $00FF)
                dc.w $9600 ! (((grp_5CA00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_5CA00 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_8
                dc.w $7890
                dc.w $9500 ! ((grp_C8800 / 2) & $00FF)
                dc.w $9600 ! (((grp_C8800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C8800 / 2) >> 16)
                dc.w 2
