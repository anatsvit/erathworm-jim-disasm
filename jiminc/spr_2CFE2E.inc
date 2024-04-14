byte_2CFE2E:    dc.b   0,  0,$7C,$79,$83,$89,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_C6C   o
                dc.w sprite_16_24
                dc.w $7877
                dc.w $9500 ! ((grp_1708C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_1708C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1708C0 / 2) >> 16)
                dc.w 6
