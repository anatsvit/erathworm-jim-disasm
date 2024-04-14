byte_2FE92A:    dc.b   0,  0,$7A,$88,$80,$8B,$7D,$89,$7E,$89
                                        ; DATA XREF: ROM:off_344C   o
                dc.w sprite_16_8
                dc.w $7486
                dc.w $9500 ! ((grp_E0800 / 2) & $00FF)
                dc.w $9600 ! (((grp_E0800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E0800 / 2) >> 16)
                dc.w 2
