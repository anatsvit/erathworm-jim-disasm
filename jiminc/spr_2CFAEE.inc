byte_2CFAEE:    dc.b   0,  0,$7A,$7F,$84,$84,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_BFC   o
                dc.w sprite_16_16
                dc.w $787D
                dc.w $9500 ! ((grp_75080 / 2) & $00FF)
                dc.w $9600 ! (((grp_75080 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_75080 / 2) >> 16)
                dc.w 4
