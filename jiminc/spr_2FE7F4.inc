byte_2FE7F4:    dc.b   0,  1,$7A,$84,$85,$91,$7F,$8A,$80,$8A
                                        ; DATA XREF: ROM:off_3430   o
                dc.w sprite_16_16
                dc.w $7882
                dc.w $9500 ! ((grp_95E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_95E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_95E00 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $7A92
                dc.w $9500 ! ((grp_F8D00 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8D00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8D00 / 2) >> 16)
                dc.w 1
