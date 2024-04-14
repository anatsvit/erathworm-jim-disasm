byte_2F7FD6:    dc.b   0,  0,$7C,$7D,$84,$84,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:00002BF4   o
                dc.w sprite_8_8
                dc.w $7C7D
                dc.w $9500 ! ((grp_F59A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F59A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F59A0 / 2) >> 16)
                dc.w 1
