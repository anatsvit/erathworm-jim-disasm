byte_2EF5AE:    dc.b   0,  1,$7D,$61,$8C,$67,$84,$64,$85,$64
                                        ; DATA XREF: ROM:off_24F4   o
                dc.w sprite_8_16
                dc.w $7C5F
                dc.w $9500 ! ((grp_BF800 / 2) & $00FF)
                dc.w $9600 ! (((grp_BF800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_BF800 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8B5F
                dc.w $9500 ! ((grp_F0EA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0EA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0EA0 / 2) >> 16)
                dc.w 1
