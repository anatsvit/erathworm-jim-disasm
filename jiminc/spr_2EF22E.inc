byte_2EF22E:    dc.b   0,  0,$7A,$7D,$83,$83,$7E,$80,$7F,$80
                                        ; DATA XREF: ROM:off_24A4   o
                dc.w sprite_16_16
                dc.w $787B
                dc.w $9500 ! ((grp_8AF80 / 2) & $00FF)
                dc.w $9600 ! (((grp_8AF80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8AF80 / 2) >> 16)
                dc.w 4
