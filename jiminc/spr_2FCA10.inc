byte_2FCA10:    dc.b   0,  0,$7C,$7B,$85,$83,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_3188   o
                dc.w sprite_16_16
                dc.w $7979
                dc.w $9500 ! ((grp_93C00 / 2) & $00FF)
                dc.w $9600 ! (((grp_93C00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_93C00 / 2) >> 16)
                dc.w 4
