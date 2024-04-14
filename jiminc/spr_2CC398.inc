byte_2CC398:    dc.b   0,  1,$82,$82,$90,$94,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:off_740   o
                dc.w sprite_16_24
                dc.w $8080
                dc.w $9500 ! ((grp_16EDC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_16EDC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16EDC0 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_16
                dc.w $9085
                dc.w $9500 ! ((grp_AFE00 / 2) & $00FF)
                dc.w $9600 ! (((grp_AFE00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_AFE00 / 2) >> 16)
                dc.w 2
