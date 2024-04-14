byte_2CDCBC:    dc.b   0,  0,$7A,$7C,$85,$85,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_9A8   o
                dc.w sprite_16_16
                dc.w $787A
                dc.w $9500 ! ((grp_73400 / 2) & $00FF)
                dc.w $9600 ! (((grp_73400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_73400 / 2) >> 16)
                dc.w 4
