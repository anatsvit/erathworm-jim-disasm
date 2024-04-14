byte_2CC226:    dc.b   0,  1,$82,$82,$8E,$98,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:off_70C   o
                dc.w sprite_16_24
                dc.w $8083
                dc.w $9500 ! ((grp_16EB80 / 2) & $00FF)
                dc.w $9600 ! (((grp_16EB80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16EB80 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_8
                dc.w $877B
                dc.w $9500 ! ((grp_E11E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E11E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E11E0 / 2) >> 16)
                dc.w 1
