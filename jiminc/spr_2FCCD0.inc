byte_2FCCD0:    dc.b   0,  0,$7C,$7B,$84,$83,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_3208   o
                dc.w sprite_16_16
                dc.w $7A79
                dc.w $9500 ! ((grp_94800 / 2) & $00FF)
                dc.w $9600 ! (((grp_94800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94800 / 2) >> 16)
                dc.w 4
