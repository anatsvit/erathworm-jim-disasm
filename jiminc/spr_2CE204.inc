byte_2CE204:    dc.b   0,  1,$7D,$8B,$83,$93,$80,$8F,$81,$8F
                                        ; DATA XREF: ROM:off_A10   o
                dc.w sprite_16_8
                dc.w $7B89
                dc.w $9500 ! ((grp_C7500 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7500 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7500 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7D91
                dc.w $9500 ! ((grp_E19C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E19C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E19C0 / 2) >> 16)
                dc.w 1
