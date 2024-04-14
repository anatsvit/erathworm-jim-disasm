byte_2CC46E:    dc.b   0,  0,$82,$82,$90,$92,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:off_75C   o
                dc.w sprite_16_24
                dc.w $8080
                dc.w $9500 ! ((grp_16F000 / 2) & $00FF)
                dc.w $9600 ! (((grp_16F000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16F000 / 2) >> 16)
                dc.w 6
