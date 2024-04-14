byte_2CC17E:    dc.b   0,  1,$82,$83,$8A,$8D,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:off_6F4   o
                dc.w sprite_8_8
                dc.w $8089
                dc.w $9500 ! ((grp_E1180 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1180 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1180 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $8281
                dc.w $9500 ! ((grp_E11A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E11A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E11A0 / 2) >> 16)
                dc.w 1
