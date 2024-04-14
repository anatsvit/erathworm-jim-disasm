byte_2EDFF6:    dc.b   0,  1,$7C,$82,$89,$8E,$83,$88,$84,$88
                                        ; DATA XREF: ROM:off_234C   o
                dc.w sprite_16_8
                dc.w $7B88
                dc.w $9500 ! ((grp_D9040 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9040 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9040 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8280
                dc.w $9500 ! ((grp_F05C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F05C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F05C0 / 2) >> 16)
                dc.w 1
