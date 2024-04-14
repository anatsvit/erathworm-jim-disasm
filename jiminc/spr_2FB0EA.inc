byte_2FB0EA:    dc.b   0,  0,$7D,$7D,$80,$7E,$7E,$7D,$7F,$7D
                                        ; DATA XREF: ROM:off_2F0C   o
                dc.w sprite_8_8
                dc.w $7B7B
                dc.w $9500 ! ((grp_F7680 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7680 / 2) >> 16)
                dc.w 1
