spr_funchar_T: dc.b   0,  0,$83,$82,$8F,$95,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:frame_funchar_T   o
                dc.w sprite_16_24
                dc.w $8180
                dc.w $9500 ! ((grp_16EE80 / 2) & $00FF)
                dc.w $9600 ! (((grp_16EE80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16EE80 / 2) >> 16)
                dc.w 6
