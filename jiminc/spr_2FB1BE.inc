byte_2FB1BE:    dc.b   0,  1,$7B,$7C,$83,$80,$7F,$7E,$80,$7E
                                        ; DATA XREF: ROM:off_2F2C   o
                dc.w sprite_16_8
                dc.w $797A
                dc.w $9500 ! ((grp_DF140 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF140 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF140 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7982
                dc.w $9500 ! ((grp_F7740 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7740 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7740 / 2) >> 16)
                dc.w 1
