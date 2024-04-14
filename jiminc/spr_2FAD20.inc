byte_2FAD20:    dc.b   0,  0,$7E,$7D,$84,$84,$81,$80,$82,$80
                                        ; DATA XREF: ROM:off_2E60   o
                dc.w sprite_16_16
                dc.w $7C7B
                dc.w $9500 ! ((grp_91A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_91A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_91A00 / 2) >> 16)
                dc.w 4
