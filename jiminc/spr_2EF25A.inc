byte_2EF25A:    dc.b   0,  0,$7B,$7D,$83,$83,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_24AC   o
                dc.w sprite_16_16
                dc.w $797B
                dc.w $9500 ! ((grp_8B080 / 2) & $00FF)
                dc.w $9600 ! (((grp_8B080 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8B080 / 2) >> 16)
                dc.w 4
