byte_2FCE34:    dc.b   0,  0,$82,$79,$7E,$84,$80,$7E,$81,$7E
                                        ; DATA XREF: ROM:off_3240   o
                dc.w sprite_8_16
                dc.w $8077
                dc.w $9500 ! ((grp_C58C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C58C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C58C0 / 2) >> 16)
                dc.w 2
