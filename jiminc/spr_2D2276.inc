byte_2D2276:    dc.b   0,  2,$75,$A8,$8C,$B5,$89,$AD,$8A,$AD
                                        ; DATA XREF: ROM:off_EAC   o
                dc.w sprite_16_8
                dc.w $79A7
                dc.w $9500 ! ((grp_C9C00 / 2) & $00FF)
                dc.w $9600 ! (((grp_C9C00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C9C00 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $71A7
                dc.w $9500 ! ((grp_B2480 / 2) & $00FF)
                dc.w $9600 ! (((grp_B2480 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B2480 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $89A9
                dc.w $9500 ! ((grp_B24C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_B24C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B24C0 / 2) >> 16)
                dc.w 2
