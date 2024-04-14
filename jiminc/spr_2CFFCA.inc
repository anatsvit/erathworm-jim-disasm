byte_2CFFCA:    dc.b   0,  0,$7C,$7D,$86,$8F,$81,$86,$82,$86
                                        ; DATA XREF: ROM:off_CAC   o
                dc.w sprite_16_24
                dc.w $7A7B
                dc.w $9500 ! ((grp_170A40 / 2) & $00FF)
                dc.w $9600 ! (((grp_170A40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_170A40 / 2) >> 16)
                dc.w 6
