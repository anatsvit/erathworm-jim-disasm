byte_2F8144:    dc.b   0,  0,$7C,$8A,$82,$90,$7F,$8D,$80,$8D
                                        ; DATA XREF: ROM:off_2C30   o
                dc.w sprite_8_8
                dc.w $7A8B
                dc.w $9500 ! ((grp_F5AA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F5AA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F5AA0 / 2) >> 16)
                dc.w 1
