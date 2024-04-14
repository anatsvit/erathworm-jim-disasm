byte_2EF3BC:    dc.b   0,  1,$65,$68,$95,$9E,$7D,$7F,$7E,$7F
                                        ; DATA XREF: ROM:off_24D0   o
                dc.w sprite_32_16
                dc.w $6376
                dc.w $9500 ! ((grp_53000 / 2) & $00FF)
                dc.w $9600 ! (((grp_53000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_53000 / 2) >> 16)
                dc.w 8
                dc.w sprite_24_16
                dc.w $8378
                dc.w $9500 ! ((grp_165700 / 2) & $00FF)
                dc.w $9600 ! (((grp_165700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_165700 / 2) >> 16)
                dc.w 6
