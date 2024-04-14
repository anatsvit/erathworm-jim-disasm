byte_2EF194:    dc.b   0,  0,$7C,$7D,$84,$83,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_2488   o
                dc.w sprite_16_16
                dc.w $7A7B
                dc.w $9500 ! ((grp_8AC00 / 2) & $00FF)
                dc.w $9600 ! (((grp_8AC00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8AC00 / 2) >> 16)
                dc.w 4
