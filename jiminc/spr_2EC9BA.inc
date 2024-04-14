byte_2EC9BA:    dc.b   0,  1,$78,$7A,$86,$89,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_218C   o
                dc.w sprite_8_16
                dc.w $787A
                dc.w $9500 ! ((grp_BE540 / 2) & $00FF)
                dc.w $9600 ! (((grp_BE540 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_BE540 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $807A
                dc.w $9500 ! ((grp_EFA80 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFA80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFA80 / 2) >> 16)
                dc.w 1
