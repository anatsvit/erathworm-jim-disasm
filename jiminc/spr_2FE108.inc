byte_2FE108:    dc.b   0,  1,$7D,$7C,$82,$81,$7F,$7E,$80,$7E
                                        ; DATA XREF: ROM:off_3380   o
                dc.w sprite_8_16
                dc.w $7E7A
                dc.w $9500 ! ((grp_C6040 / 2) & $00FF)
                dc.w $9600 ! (((grp_C6040 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C6040 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $767B
                dc.w $9500 ! ((grp_F8920 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8920 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8920 / 2) >> 16)
                dc.w 1
