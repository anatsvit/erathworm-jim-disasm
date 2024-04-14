byte_2ECB2A:    dc.b   0,  0,$79,$7B,$87,$8A,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_21C4   o
                dc.w sprite_16_16
                dc.w $797B
                dc.w $9500 ! ((grp_88580 / 2) & $00FF)
                dc.w $9600 ! (((grp_88580 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_88580 / 2) >> 16)
                dc.w 4
