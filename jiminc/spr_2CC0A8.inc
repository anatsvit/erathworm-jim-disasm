byte_2CC0A8:    dc.b   0,  0,$82,$82,$95,$99,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:off_6D8   o
                dc.w sprite_24_32
                dc.w $8080
                dc.w $9500 ! ((grp_F97C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F97C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F97C0 / 2) >> 16)
                dc.w $C
