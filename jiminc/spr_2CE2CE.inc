byte_2CE2CE:    dc.b   0,  0,$82,$89,$85,$8D,$83,$8B,$84,$8B
                                        ; DATA XREF: ROM:off_A2C   o
                dc.w sprite_8_16
                dc.w $8087
                dc.w $9500 ! ((grp_B04C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_B04C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B04C0 / 2) >> 16)
                dc.w 2
