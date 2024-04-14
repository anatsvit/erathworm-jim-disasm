byte_2CC4DE:    dc.b   0,  0,$82,$82,$86,$88,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:off_76C   o
                dc.w sprite_8_16
                dc.w $8080
                dc.w $9500 ! ((grp_AFD40 / 2) & $00FF)
                dc.w $9600 ! (((grp_AFD40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_AFD40 / 2) >> 16)
                dc.w 2
