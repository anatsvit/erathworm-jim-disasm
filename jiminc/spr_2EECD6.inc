byte_2EECD6:    dc.b   0,  0,$7B,$8B,$83,$8A,$7F,$8A,$80,$8A
                                        ; DATA XREF: ROM:off_2414   o
                dc.w sprite_16_8
                dc.w $7888
                dc.w $9500 ! ((grp_D9600 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9600 / 2) >> 16)
                dc.w 2
