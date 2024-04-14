byte_2CC1FA:    dc.b   0,  0,$82,$82,$8E,$93,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:off_704   o
                dc.w sprite_16_24
                dc.w $8080
                dc.w $9500 ! ((grp_16E640 / 2) & $00FF)
                dc.w $9600 ! (((grp_16E640 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16E640 / 2) >> 16)
                dc.w 6
