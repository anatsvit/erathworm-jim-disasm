byte_2FF004:    dc.b   0,  1,$76,$7B,$7B,$81,$78,$7E,$79,$7E
                                        ; DATA XREF: ROM:off_3520   o
                dc.w sprite_8_16
                dc.w $7479
                dc.w $9500 ! ((grp_C6340 / 2) & $00FF)
                dc.w $9600 ! (((grp_C6340 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C6340 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7C7D
                dc.w $9500 ! ((grp_F90E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F90E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F90E0 / 2) >> 16)
                dc.w 1
