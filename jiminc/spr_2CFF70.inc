byte_2CFF70:    dc.b   0,  1,$74,$3A,$83,$4B,$7B,$42,$7C,$42
                                        ; DATA XREF: ROM:off_CA0   o
                dc.w sprite_16_24
                dc.w $7238
                dc.w $9500 ! ((grp_170BC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_170BC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_170BC0 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_16
                dc.w $823D
                dc.w $9500 ! ((grp_B1880 / 2) & $00FF)
                dc.w $9600 ! (((grp_B1880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B1880 / 2) >> 16)
                dc.w 2
