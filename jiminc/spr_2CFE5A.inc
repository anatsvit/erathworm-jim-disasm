byte_2CFE5A:    dc.b   0,  0,$7E,$7A,$80,$86,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_C74   o
                dc.w sprite_8_24
                dc.w $7C78
                dc.w $9500 ! ((grp_192BE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_192BE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_192BE0 / 2) >> 16)
                dc.w 3
