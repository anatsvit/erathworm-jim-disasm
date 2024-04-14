byte_2CDCA6:    dc.b   0,  0,$7C,$7D,$83,$83,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_9A4   o
                dc.w sprite_16_16
                dc.w $7A7B
                dc.w $9500 ! ((grp_73500 / 2) & $00FF)
                dc.w $9600 ! (((grp_73500 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_73500 / 2) >> 16)
                dc.w 4
