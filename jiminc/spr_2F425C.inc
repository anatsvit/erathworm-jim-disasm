byte_2F425C:    dc.b   0,  0,$7E,$7D,$84,$84,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_2900   o
                dc.w sprite_16_16
                dc.w $7A7B
                dc.w $9500 ! ((grp_8DC00 / 2) & $00FF)
                dc.w $9600 ! (((grp_8DC00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8DC00 / 2) >> 16)
                dc.w 4
