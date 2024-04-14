byte_2ECE32:    dc.b   0,  1,$77,$86,$83,$8C,$80,$89,$81,$89
                                        ; DATA XREF: ROM:off_222C   o
                dc.w sprite_16_16
                dc.w $7584
                dc.w $9500 ! ((grp_88800 / 2) & $00FF)
                dc.w $9600 ! (((grp_88800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_88800 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $8584
                dc.w $9500 ! ((grp_EFD60 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFD60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFD60 / 2) >> 16)
                dc.w 1
