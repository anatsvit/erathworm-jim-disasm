byte_2CE25E:    dc.b   0,  1,$80,$8B,$84,$90,$82,$8D,$83,$8D
                                        ; DATA XREF: ROM:off_A1C   o
                dc.w sprite_16_8
                dc.w $7E89
                dc.w $9500 ! ((grp_C7580 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7580 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7580 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7E91
                dc.w $9500 ! ((grp_E1A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1A00 / 2) >> 16)
                dc.w 1
