byte_2DBE06:    dc.b   0,  1,$6C,$70,$88,$88,$7A,$7C,$6F,$72
                                        ; DATA XREF: ROM:off_15D4   o
                dc.w sprite_32_24
                dc.w $6E79
                dc.w $9500 ! ((grp_124B40 / 2) & $00FF)
                dc.w $9600 ! (((grp_124B40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_124B40 / 2) >> 16)
                dc.w $C
                dc.w sprite_16_8
                dc.w $7271
                dc.w $9500 ! ((grp_CCCC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_CCCC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_CCCC0 / 2) >> 16)
                dc.w 2
