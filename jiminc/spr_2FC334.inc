byte_2FC334:    dc.b   0,  0,$61,$85,$73,$8F,$6A,$8A,$6B,$8A
                                        ; DATA XREF: ROM:off_30E8   o
                dc.w sprite_24_16
                dc.w $5F83
                dc.w $9500 ! ((grp_16BD00 / 2) & $00FF)
                dc.w $9600 ! (((grp_16BD00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16BD00 / 2) >> 16)
                dc.w 6
