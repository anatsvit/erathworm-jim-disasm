byte_2FBECC:    dc.b   0,  0,$78,$79,$88,$8A,$80,$81,$81,$81
                                        ; DATA XREF: ROM:off_3040   o
                dc.w sprite_24_24
                dc.w $7477
                dc.w $9500 ! ((grp_154300 / 2) & $00FF)
                dc.w $9600 ! (((grp_154300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_154300 / 2) >> 16)
                dc.w 9
