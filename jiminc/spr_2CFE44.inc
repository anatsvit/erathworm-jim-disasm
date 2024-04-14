byte_2CFE44:    dc.b   0,  0,$7B,$77,$83,$8B,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_C70   o
                dc.w sprite_16_24
                dc.w $7976
                dc.w $9500 ! ((grp_170980 / 2) & $00FF)
                dc.w $9600 ! (((grp_170980 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_170980 / 2) >> 16)
                dc.w 6
