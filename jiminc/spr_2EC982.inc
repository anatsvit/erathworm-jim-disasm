byte_2EC982:    dc.b   0,  1,$7A,$7A,$86,$89,$80,$81,$81,$81
                                        ; DATA XREF: ROM:off_2184   o
                dc.w sprite_16_8
                dc.w $7B7A
                dc.w $9500 ! ((grp_D8000 / 2) & $00FF)
                dc.w $9600 ! (((grp_D8000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D8000 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7B82
                dc.w $9500 ! ((grp_EFA60 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFA60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFA60 / 2) >> 16)
                dc.w 1
