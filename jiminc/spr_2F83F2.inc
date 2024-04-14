byte_2F83F2:    dc.b   0,  1,$74,$7A,$8D,$8F,$80,$84,$81,$84
                                        ; DATA XREF: ROM:off_2C74   o
                dc.w sprite_32_24
                dc.w $7178
                dc.w $9500 ! ((grp_1384C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_1384C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1384C0 / 2) >> 16)
                dc.w $C
                dc.w sprite_8_8
                dc.w $7890
                dc.w $9500 ! ((grp_F5FA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F5FA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F5FA0 / 2) >> 16)
                dc.w 1
