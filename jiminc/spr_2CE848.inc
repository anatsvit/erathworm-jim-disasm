byte_2CE848:    dc.b   0,  4,$80,  2,$7E,$7F,$7F,$40,$80,$40
                                        ; DATA XREF: ROM:off_AF0   o
                dc.w sprite_8_32
                dc.w $7E00
                dc.w $9500 ! ((grp_A2F80 / 2) & $00FF)
                dc.w $9600 ! (((grp_A2F80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A2F80 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_32
                dc.w $7E20
                dc.w $9500 ! ((grp_A3000 / 2) & $00FF)
                dc.w $9600 ! (((grp_A3000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A3000 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_32
                dc.w $7E40
                dc.w $9500 ! ((grp_A3080 / 2) & $00FF)
                dc.w $9600 ! (((grp_A3080 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A3080 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_32
                dc.w $7E60
                dc.w $9500 ! ((grp_A3100 / 2) & $00FF)
                dc.w $9600 ! (((grp_A3100 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A3100 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $7E80
                dc.w $9500 ! ((grp_E2540 / 2) & $00FF)
                dc.w $9600 ! (((grp_E2540 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E2540 / 2) >> 16)
                dc.w 1
