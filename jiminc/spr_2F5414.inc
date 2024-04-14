byte_2F5414:    dc.b   0,  1,$7F,$7D,$83,$82,$81,$7F,$82,$7F
                                        ; DATA XREF: ROM:off_2A80   o
                dc.w sprite_8_16
                dc.w $7F7B
                dc.w $9500 ! ((grp_C1E80 / 2) & $00FF)
                dc.w $9600 ! (((grp_C1E80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C1E80 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $777D
                dc.w $9500 ! ((grp_F46A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F46A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F46A0 / 2) >> 16)
                dc.w 1
