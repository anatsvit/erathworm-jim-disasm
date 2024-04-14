byte_2FCDBA:    dc.b   0,  0,$7A,$7E,$85,$80,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_322C   o
                dc.w sprite_16_8
                dc.w $787C
                dc.w $9500 ! ((grp_DF840 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF840 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF840 / 2) >> 16)
                dc.w 2
