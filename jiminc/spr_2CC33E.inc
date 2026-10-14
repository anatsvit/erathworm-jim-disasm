spr_funchar_P: dc.b   0,  1,$83,$82,$97,$98,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:frame_funchar_P   o
                dc.w sprite_24_24
                dc.w $8180
                dc.w $9500 ! ((grp_13D680 / 2) & $00FF)
                dc.w $9600 ! (((grp_13D680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_13D680 / 2) >> 16)
                dc.w 9
                dc.w sprite_16_8
                dc.w $8198
                dc.w $9500 ! ((grp_C6A80 / 2) & $00FF)
                dc.w $9600 ! (((grp_C6A80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C6A80 / 2) >> 16)
                dc.w 2
