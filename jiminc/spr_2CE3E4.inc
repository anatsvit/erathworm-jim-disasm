byte_2CE3E4:    dc.b   0,  1,$88,$83,$8F,$88,$8B,$85,$8C,$85
                                        ; DATA XREF: ROM:off_A58   o
                dc.w sprite_8_16
                dc.w $8681
                dc.w $9500 ! ((grp_B03C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_B03C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B03C0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8E83
                dc.w $9500 ! ((grp_E19A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E19A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E19A0 / 2) >> 16)
                dc.w 1
