byte_2FF026:    dc.b   0,  1,$78,$7F,$81,$83,$7C,$81,$7D,$81
                                        ; DATA XREF: ROM:off_3524   o
                dc.w sprite_16_8
                dc.w $767D
                dc.w $9500 ! ((grp_E0A40 / 2) & $00FF)
                dc.w $9600 ! (((grp_E0A40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E0A40 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7A85
                dc.w $9500 ! ((grp_F90A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F90A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F90A0 / 2) >> 16)
                dc.w 1
