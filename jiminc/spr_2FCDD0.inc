byte_2FCDD0:    dc.b   0,  0,$7A,$81,$85,$7D,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_3230   o
                dc.w sprite_16_8
                dc.w $787F
                dc.w $9500 ! ((grp_DF880 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF880 / 2) >> 16)
                dc.w 2
