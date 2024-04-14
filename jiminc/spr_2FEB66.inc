byte_2FEB66:    dc.b   0,  0,$7B,$85,$84,$8B,$7F,$88,$80,$88
                                        ; DATA XREF: ROM:off_349C   o
                dc.w sprite_16_16
                dc.w $7983
                dc.w $9500 ! ((grp_96100 / 2) & $00FF)
                dc.w $9600 ! (((grp_96100 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_96100 / 2) >> 16)
                dc.w 4
