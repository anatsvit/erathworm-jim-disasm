byte_2FED34:    dc.b   0,  1,$72,$7C,$89,$84,$7D,$80,$7E,$80
                                        ; DATA XREF: ROM:off_34D8   o
                dc.w sprite_32_8
                dc.w $6D7A
                dc.w $9500 ! ((grp_A1D00 / 2) & $00FF)
                dc.w $9600 ! (((grp_A1D00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A1D00 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $7D82
                dc.w $9500 ! ((grp_E1000 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1000 / 2) >> 16)
                dc.w 2
