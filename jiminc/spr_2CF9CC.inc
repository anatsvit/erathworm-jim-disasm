byte_2CF9CC:    dc.b   0,  0,$7C,$7B,$83,$86,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_BD0   o
                dc.w sprite_16_16
                dc.w $7A79
                dc.w $9500 ! ((grp_74E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_74E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_74E00 / 2) >> 16)
                dc.w 4
