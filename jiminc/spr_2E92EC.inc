byte_2E92EC:    dc.b   0,  0,$79,$78,$84,$97,$7E,$82,$7F,$82
                                        ; DATA XREF: ROM:off_1E48   o
                dc.w sprite_16_8
                dc.w $7881
                dc.w $9500 ! ((grp_D6D00 / 2) & $00FF)
                dc.w $9600 ! (((grp_D6D00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D6D00 / 2) >> 16)
                dc.w 2
