byte_2FE16C:    dc.b   0,  2,$76,$72,$8B,$8D,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_3390   o
                dc.w sprite_24_32
                dc.w $7470
                dc.w $9500 ! ((grp_11D040 / 2) & $00FF)
                dc.w $9600 ! (((grp_11D040 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_11D040 / 2) >> 16)
                dc.w $C
                dc.w sprite_8_8
                dc.w $8C78
                dc.w $9500 ! ((grp_F8BC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8BC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8BC0 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $8C88
                dc.w $9500 ! ((grp_F8BE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8BE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8BE0 / 2) >> 16)
                dc.w 1
