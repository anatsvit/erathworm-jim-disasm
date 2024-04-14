byte_2CFEEA:    dc.b   0,  1,$7D,$80,$82,$85,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_C8C   o
                dc.w sprite_16_8
                dc.w $7B7E
                dc.w $9500 ! ((grp_C8A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_C8A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C8A00 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7B86
                dc.w $9500 ! ((grp_E3160 / 2) & $00FF)
                dc.w $9600 ! (((grp_E3160 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E3160 / 2) >> 16)
                dc.w 1
