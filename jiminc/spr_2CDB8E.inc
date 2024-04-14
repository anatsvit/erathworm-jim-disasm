byte_2CDB8E:    dc.b   0,  0,$7F,$7A,$84,$83,$81,$7E,$82,$7E
                                        ; DATA XREF: ROM:off_97C   o
                dc.w sprite_16_16
                dc.w $7D78
                dc.w $9500 ! ((grp_73380 / 2) & $00FF)
                dc.w $9600 ! (((grp_73380 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_73380 / 2) >> 16)
                dc.w 4
