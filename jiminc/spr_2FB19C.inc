byte_2FB19C:    dc.b   0,  1,$7B,$7C,$82,$80,$7E,$7E,$7F,$7E
                                        ; DATA XREF: ROM:off_2F28   o
                dc.w sprite_16_8
                dc.w $797A
                dc.w $9500 ! ((grp_DF100 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF100 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF100 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7982
                dc.w $9500 ! ((grp_F7720 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7720 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7720 / 2) >> 16)
                dc.w 1
