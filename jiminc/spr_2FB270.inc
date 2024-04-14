byte_2FB270:    dc.b   0,  1,$72,$78,$89,$83,$7D,$7D,$7E,$7D
                                        ; DATA XREF: ROM:off_2F48   o
                dc.w sprite_24_16
                dc.w $7076
                dc.w $9500 ! ((grp_16B040 / 2) & $00FF)
                dc.w $9600 ! (((grp_16B040 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16B040 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_8
                dc.w $887E
                dc.w $9500 ! ((grp_F7780 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7780 / 2) >> 16)
                dc.w 1
