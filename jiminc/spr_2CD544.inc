byte_2CD544:    dc.b   0,  0,$7D,$88,$84,$8F,$82,$8F,$81,$8F
                                        ; DATA XREF: ROM:off_8D8   o
                dc.w sprite_16_16
                dc.w $7B86
                dc.w $9500 ! ((grp_73180 / 2) & $00FF)
                dc.w $9600 ! (((grp_73180 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_73180 / 2) >> 16)
                dc.w 4
