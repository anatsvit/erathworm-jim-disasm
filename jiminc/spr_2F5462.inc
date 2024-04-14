byte_2F5462:    dc.b   0,  0,$7C,$81,$80,$84,$7E,$82,$7F,$82
                                        ; DATA XREF: ROM:off_2A8C   o
                dc.w sprite_16_8
                dc.w $747F
                dc.w $9500 ! ((grp_DCA40 / 2) & $00FF)
                dc.w $9600 ! (((grp_DCA40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DCA40 / 2) >> 16)
                dc.w 2
