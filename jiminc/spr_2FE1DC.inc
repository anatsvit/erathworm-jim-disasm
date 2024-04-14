byte_2FE1DC:    dc.b   0,  0,$75,$72,$8D,$8D,$81,$7F,$82,$7F
                                        ; DATA XREF: ROM:off_33A0   o
                dc.w sprite_32_32
                dc.w $7370
                dc.w $9500 ! ((grp_45600 / 2) & $00FF)
                dc.w $9600 ! (((grp_45600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_45600 / 2) >> 16)
                dc.w $10
