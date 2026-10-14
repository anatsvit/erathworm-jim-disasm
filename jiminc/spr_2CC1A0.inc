spr_funchar_A: dc.b   0,  0,$82,$82,$96,$94,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:frame_funchar_A   o
                dc.w sprite_24_24
                dc.w $8080
                dc.w $9500 ! ((grp_13CEA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_13CEA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_13CEA0 / 2) >> 16)
                dc.w 9
