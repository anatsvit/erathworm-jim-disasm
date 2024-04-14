byte_2F4732:    dc.b   0,  0,$7F,$7B,$83,$85,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_29BC   o
                dc.w sprite_16_16
                dc.w $7979
                dc.w $9500 ! ((grp_8DD80 / 2) & $00FF)
                dc.w $9600 ! (((grp_8DD80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8DD80 / 2) >> 16)
                dc.w 4
