byte_2FE1B0:    dc.b   0,  0,$75,$72,$8C,$8D,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_3398   o
                dc.w sprite_32_32
                dc.w $7370
                dc.w $9500 ! ((grp_45200 / 2) & $00FF)
                dc.w $9600 ! (((grp_45200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_45200 / 2) >> 16)
                dc.w $10
