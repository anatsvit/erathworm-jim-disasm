byte_2CD9BA:    dc.b   0,  1,$83,$88,$96,$8D,$83,$8E,$85,$9E
                                        ; DATA XREF: ROM:off_94C   o
                dc.w sprite_16_8
                dc.w $8188
                dc.w $9500 ! ((grp_C7C00 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7C00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7C00 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $917E
                dc.w $9500 ! ((grp_B08C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_B08C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B08C0 / 2) >> 16)
                dc.w 2
