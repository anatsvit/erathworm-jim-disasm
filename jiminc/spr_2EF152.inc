byte_2EF152:    dc.b   0,  0,$7A,$7C,$85,$83,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_247C   o
                dc.w sprite_16_16
                dc.w $787A
                dc.w $9500 ! ((grp_8A380 / 2) & $00FF)
                dc.w $9600 ! (((grp_8A380 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8A380 / 2) >> 16)
                dc.w 4
