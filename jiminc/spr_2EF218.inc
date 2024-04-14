byte_2EF218:    dc.b   0,  0,$7C,$7D,$83,$83,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_24A0   o
                dc.w sprite_16_16
                dc.w $767B
                dc.w $9500 ! ((grp_8AF00 / 2) & $00FF)
                dc.w $9600 ! (((grp_8AF00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8AF00 / 2) >> 16)
                dc.w 4
