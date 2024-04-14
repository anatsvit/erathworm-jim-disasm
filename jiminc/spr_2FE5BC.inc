byte_2FE5BC:    dc.b   0,  1,$75,$7D,$80,$89,$7A,$83,$7B,$83
                                        ; DATA XREF: ROM:off_33F0   o
                dc.w sprite_16_16
                dc.w $737B
                dc.w $9500 ! ((grp_96800 / 2) & $00FF)
                dc.w $9600 ! (((grp_96800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_96800 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $758B
                dc.w $9500 ! ((grp_F96A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F96A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F96A0 / 2) >> 16)
                dc.w 1
