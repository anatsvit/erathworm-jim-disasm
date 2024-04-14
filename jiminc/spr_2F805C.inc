byte_2F805C:    dc.b   0,  0,$7A,$7C,$89,$81,$80,$7E,$81,$7E
                                        ; DATA XREF: ROM:off_2C08   o
                dc.w sprite_16_8
                dc.w $797C
                dc.w $9500 ! ((grp_DD6C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_DD6C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DD6C0 / 2) >> 16)
                dc.w 2
