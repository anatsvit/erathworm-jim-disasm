byte_2EAC0A:    dc.b   0,  2,$70,$62,$8C,$80,$7E,$71,$7F,$71
                                        ; DATA XREF: ROM:off_1F9C   o
                dc.w sprite_32_24
                dc.w $6F68
                dc.w $9500 ! ((grp_130E40 / 2) & $00FF)
                dc.w $9600 ! (((grp_130E40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_130E40 / 2) >> 16)
                dc.w $C
                dc.w sprite_16_8
                dc.w $6E60
                dc.w $9500 ! ((grp_D7640 / 2) & $00FF)
                dc.w $9600 ! (((grp_D7640 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D7640 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7180
                dc.w $9500 ! ((grp_EF1A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_EF1A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EF1A0 / 2) >> 16)
                dc.w 1
