byte_2F81D4:    dc.b   0,  1,$74,$85,$8B,$8F,$7F,$8A,$80,$8A
                                        ; DATA XREF: ROM:off_2C48   o
                dc.w sprite_24_8
                dc.w $7488
                dc.w $9500 ! ((grp_18F460 / 2) & $00FF)
                dc.w $9600 ! (((grp_18F460 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_18F460 / 2) >> 16)
                dc.w 3
                dc.w sprite_16_8
                dc.w $7580
                dc.w $9500 ! ((grp_DD840 / 2) & $00FF)
                dc.w $9600 ! (((grp_DD840 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DD840 / 2) >> 16)
                dc.w 2
