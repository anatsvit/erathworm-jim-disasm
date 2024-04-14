byte_2CC312:    dc.b   0,  0,$82,$82,$90,$93,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:off_72C   o
                dc.w sprite_24_24
                dc.w $8080
                dc.w $9500 ! ((grp_13D560 / 2) & $00FF)
                dc.w $9600 ! (((grp_13D560 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_13D560 / 2) >> 16)
                dc.w 9
