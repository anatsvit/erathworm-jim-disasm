byte_2DADBA:    dc.b   0,  2,$71,$7F,$9A,$8D,$85,$86,$8E,$83
                                        ; DATA XREF: ROM:off_150C   o
                dc.w sprite_32_16
                dc.w $7F7D
                dc.w $9500 ! ((grp_4BC00 / 2) & $00FF)
                dc.w $9600 ! (((grp_4BC00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_4BC00 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_16
                dc.w $6F83
                dc.w $9500 ! ((grp_7E100 / 2) & $00FF)
                dc.w $9600 ! (((grp_7E100 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_7E100 / 2) >> 16)
                dc.w 4
                dc.w sprite_24_8
                dc.w $7F8D
                dc.w $9500 ! ((grp_1879C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_1879C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1879C0 / 2) >> 16)
                dc.w 3
