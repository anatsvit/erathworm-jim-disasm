byte_2F554E:    dc.b   0,  1,$7F,$7B,$84,$83,$81,$7F,$82,$7F
                                        ; DATA XREF: ROM:off_2AAC   o
                dc.w sprite_16_8
                dc.w $7879
                dc.w $9500 ! ((grp_DCB40 / 2) & $00FF)
                dc.w $9600 ! (((grp_DCB40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DCB40 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7C81
                dc.w $9500 ! ((grp_F4800 / 2) & $00FF)
                dc.w $9600 ! (((grp_F4800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F4800 / 2) >> 16)
                dc.w 1
