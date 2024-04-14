byte_2FCFD2:    dc.b   0,  0,$83,$65,$9A,$6F,$8E,$6A,$8F,$6A
                                        ; DATA XREF: ROM:off_327C   o
                dc.w sprite_32_16
                dc.w $8163
                dc.w $9500 ! ((grp_59400 / 2) & $00FF)
                dc.w $9600 ! (((grp_59400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_59400 / 2) >> 16)
                dc.w 8
