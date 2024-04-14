byte_2FB12C:    dc.b   0,  0,$7D,$7D,$81,$80,$7F,$7E,$80,$7E
                                        ; DATA XREF: ROM:off_2F18   o
                dc.w sprite_16_8
                dc.w $7B7B
                dc.w $9500 ! ((grp_DF000 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF000 / 2) >> 16)
                dc.w 2
