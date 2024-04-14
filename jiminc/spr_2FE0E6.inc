byte_2FE0E6:    dc.b   0,  1,$7D,$7D,$81,$81,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_337C   o
                dc.w sprite_8_16
                dc.w $7E7B
                dc.w $9500 ! ((grp_C6000 / 2) & $00FF)
                dc.w $9600 ! (((grp_C6000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C6000 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $767B
                dc.w $9500 ! ((grp_F8900 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8900 / 2) >> 16)
                dc.w 1
