byte_2EFD6A:    dc.b   0,  1,$71,$83,$90,$8E,$80,$88,$81,$88
                                        ; DATA XREF: ROM:off_259C   o
                dc.w sprite_32_16
                dc.w $6F81
                dc.w $9500 ! ((grp_53600 / 2) & $00FF)
                dc.w $9600 ! (((grp_53600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_53600 / 2) >> 16)
                dc.w 8
                dc.w sprite_8_8
                dc.w $8F81
                dc.w $9500 ! ((grp_F13E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F13E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F13E0 / 2) >> 16)
                dc.w 1
