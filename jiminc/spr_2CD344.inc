byte_2CD344:    dc.b   0,  2,$84,$81,$93,$8C,$82,$9E,$83,$9E
                                        ; DATA XREF: ROM:off_8A0   o
                dc.w sprite_16_8
                dc.w $8087
                dc.w $9500 ! ((grp_C78C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C78C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C78C0 / 2) >> 16)
                dc.w 2
                dc.w sprite_16_8
                dc.w $8681
                dc.w $9500 ! ((grp_C7900 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7900 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8E79
                dc.w $9500 ! ((grp_E1D40 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1D40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1D40 / 2) >> 16)
                dc.w 1
