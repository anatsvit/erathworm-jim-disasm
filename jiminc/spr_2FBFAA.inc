byte_2FBFAA:    dc.b   0,  0,$7D,$7E,$82,$83,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_3064   o
                dc.w sprite_16_16
                dc.w $7B7C
                dc.w $9500 ! ((grp_92700 / 2) & $00FF)
                dc.w $9600 ! (((grp_92700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_92700 / 2) >> 16)
                dc.w 4
