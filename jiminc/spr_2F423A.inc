byte_2F423A:    dc.b   0,  1,$7D,$7C,$84,$84,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_28FC   o
                dc.w sprite_8_16
                dc.w $7B7A
                dc.w $9500 ! ((grp_C1340 / 2) & $00FF)
                dc.w $9600 ! (((grp_C1340 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C1340 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $837A
                dc.w $9500 ! ((grp_F3600 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3600 / 2) >> 16)
                dc.w 1
