byte_2FE984:    dc.b   0,  1,$7E,$88,$86,$8E,$82,$8B,$83,$8B
                                        ; DATA XREF: ROM:off_3458   o
                dc.w sprite_8_8
                dc.w $7C86
                dc.w $9500 ! ((grp_F8E60 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8E60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8E60 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $838C
                dc.w $9500 ! ((grp_F8E80 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8E80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8E80 / 2) >> 16)
                dc.w 1
