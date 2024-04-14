byte_2FECFC:    dc.b   0,  1,$73,$7B,$89,$82,$7E,$7E,$7F,$7E
                                        ; DATA XREF: ROM:off_34D0   o
                dc.w sprite_16_16
                dc.w $7D79
                dc.w $9500 ! ((grp_96A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_96A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_96A00 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
word_2FED14:    dc.w $6D7F              ; DATA XREF: ROM:001B095C   o
                dc.w $9500 ! ((grp_E0FC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E0FC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E0FC0 / 2) >> 16)
                dc.w 2
