byte_2F5478:    dc.b   0,  1,$7B,$7F,$82,$85,$7E,$82,$7F,$82
                                        ; DATA XREF: ROM:off_2A90   o
                dc.w sprite_16_8
                dc.w $7980
                dc.w $9500 ! ((grp_DCA80 / 2) & $00FF)
                dc.w $9600 ! (((grp_DCA80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DCA80 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7D78
                dc.w $9500 ! ((grp_F4700 / 2) & $00FF)
                dc.w $9600 ! (((grp_F4700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F4700 / 2) >> 16)
                dc.w 1
