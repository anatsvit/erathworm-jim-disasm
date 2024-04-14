byte_2FE710:    dc.b   0,  2,$71,$85,$8A,$8D,$7C,$8B,$7D,$8B
                                        ; DATA XREF: ROM:00003418   o
                dc.w sprite_16_8
                dc.w $668C
                dc.w $9500 ! ((grp_E0740 / 2) & $00FF)
                dc.w $9600 ! (((grp_E0740 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E0740 / 2) >> 16)
                dc.w 2
                dc.w sprite_16_8
                dc.w $7E84
                dc.w $9500 ! ((grp_E0780 / 2) & $00FF)
                dc.w $9600 ! (((grp_E0780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E0780 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7687
                dc.w $9500 ! ((grp_F8DE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8DE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8DE0 / 2) >> 16)
                dc.w 1
