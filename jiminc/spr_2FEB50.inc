byte_2FEB50:    dc.b   0,  0,$7A,$85,$83,$8D,$7E,$89,$7F,$89
                                        ; DATA XREF: ROM:off_3498   o
                dc.w sprite_16_16
                dc.w $7883
                dc.w $9500 ! ((grp_96080 / 2) & $00FF)
                dc.w $9600 ! (((grp_96080 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_96080 / 2) >> 16)
                dc.w 4
