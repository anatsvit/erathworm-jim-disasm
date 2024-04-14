byte_2EF168:    dc.b   0,  0,$7A,$7A,$85,$83,$7F,$7E,$80,$7E
                                        ; DATA XREF: ROM:off_2480   o
                dc.w sprite_16_16
                dc.w $7878
                dc.w $9500 ! ((grp_8A400 / 2) & $00FF)
                dc.w $9600 ! (((grp_8A400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8A400 / 2) >> 16)
                dc.w 4
