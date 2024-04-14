byte_2F819C:    dc.b   0,  0,$77,$88,$87,$90,$7E,$8B,$7F,$8B
                                        ; DATA XREF: ROM:off_2C40   o
                dc.w sprite_16_8
                dc.w $7788
                dc.w $9500 ! ((grp_DD800 / 2) & $00FF)
                dc.w $9600 ! (((grp_DD800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DD800 / 2) >> 16)
                dc.w 2
