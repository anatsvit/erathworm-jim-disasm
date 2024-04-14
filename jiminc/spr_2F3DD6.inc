byte_2F3DD6:    dc.b   0,  1,$8A,$7F,$91,$83,$8D,$81,$8E,$81
                                        ; DATA XREF: ROM:off_287C   o
                dc.w sprite_16_8
                dc.w $7B7D
                dc.w $9500 ! ((grp_DC440 / 2) & $00FF)
                dc.w $9600 ! (((grp_DC440 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DC440 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7C85
                dc.w $9500 ! ((grp_F3FA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3FA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3FA0 / 2) >> 16)
                dc.w 1
