byte_2FCD62:    dc.b   0,  0,$7C,$7C,$84,$83,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_321C   o
                dc.w sprite_16_16
                dc.w $7A7A
                dc.w $9500 ! ((grp_94980 / 2) & $00FF)
                dc.w $9600 ! (((grp_94980 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94980 / 2) >> 16)
                dc.w 4
