byte_2EB458:    dc.b   0,  0,$77,$4C,$82,$50,$79,$4E,$7A,$4E
                                        ; DATA XREF: ROM:00002010   o
                dc.w sprite_24_8
                dc.w $6F4B
                dc.w $9500 ! ((grp_18C040 / 2) & $00FF)
                dc.w $9600 ! (((grp_18C040 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_18C040 / 2) >> 16)
                dc.w 3
