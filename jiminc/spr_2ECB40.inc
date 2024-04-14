byte_2ECB40:    dc.b   0,  0,$79,$7B,$88,$89,$80,$81,$81,$81
                                        ; DATA XREF: ROM:off_21C8   o
                dc.w sprite_16_16
                dc.w $787B
                dc.w $9500 ! ((grp_88600 / 2) & $00FF)
                dc.w $9600 ! (((grp_88600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_88600 / 2) >> 16)
                dc.w 4
