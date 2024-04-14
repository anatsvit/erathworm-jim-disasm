byte_2EF5FE:    dc.b   0,  1,$7C,$5D,$8F,$62,$85,$5F,$86,$5F
                                        ; DATA XREF: ROM:off_24FC   o
                dc.w sprite_8_8
                dc.w $7A5B
                dc.w $9500 ! ((grp_F0F00 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0F00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0F00 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $8A5D
                dc.w $9500 ! ((grp_F0F20 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0F20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0F20 / 2) >> 16)
                dc.w 1
