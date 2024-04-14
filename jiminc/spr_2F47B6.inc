byte_2F47B6:    dc.b   0,  0,$80,$7D,$82,$83,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_29D4   o
                dc.w sprite_8_16
                dc.w $7D7B
                dc.w $9500 ! ((grp_C1680 / 2) & $00FF)
                dc.w $9600 ! (((grp_C1680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C1680 / 2) >> 16)
                dc.w 2
