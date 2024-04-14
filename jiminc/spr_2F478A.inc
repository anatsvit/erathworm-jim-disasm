byte_2F478A:    dc.b   0,  0,$80,$7D,$82,$84,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_29CC   o
                dc.w sprite_8_16
                dc.w $7D7B
                dc.w $9500 ! ((grp_C1600 / 2) & $00FF)
                dc.w $9600 ! (((grp_C1600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C1600 / 2) >> 16)
                dc.w 2
